/*Un método utilizado por los profesores para ordenar exámenes por número de matrícula consiste en 
dividir el conjunto total de exámenes en dos grupos de igual tamaño, luego ordenar por número de 
matrícula cada grupo por separado y finalmente combinar los dos grupos en uno solo para tener todo 
el conjunto ordenado. Preparar un algoritmo que reciba un vector de N componentes y utilice este 
método para ordenario. Utilizar una función al realizar el proceso.*/
#include <stdio.h>

//Funcion para cargar las matriculas a los vectores
void cargar_matricula(int vector[], int tamano){
    for (int i = 0; i < tamano; i++)
    {
        printf("Introduzca la matricula de este estudiante: ");
        scanf("%d",&vector[i]);
        while (vector[i]<1)
        {
            printf("ERROR\nIntroduzca la matricula de este estudiante: ");
            scanf("%d",&vector[i]);
        }
    }
}

//Funcion para ordenar las matriculas a los vectores
void ordenar(int vector[], int tamano){
    int aux;
    for (int i = 0; i < tamano-1; i++){
        for (int j = 0; j < tamano-1-i; j++){
            if (vector[j]>vector[j+1]){
                aux=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=aux;
            }
        }
    }
}

int main()
{
    //Inicializamos variables para los tamaños de los vectores, cont es para combinar
    int total, cant_g1, cant_g2, cont=0;
    printf("Introduzca la cantidad de estudiantes a revisar: ");
    scanf("%d",&total);

    //Validamos el total de matriculas
    while (total<1)
    {
        printf("ERROR\nIntroduzca la cantidad de estudiantes a revisar: ");
        scanf("%d",&total);
    }

    cant_g1=total/2; 
    cant_g2=total-cant_g1;

    //Inicializamos vectores con sus respectivos tamaños
    int grupo1[cant_g1], grupo2[cant_g2], grupo_total[total];

    //Hacemos las operaciones de cargar y ordenar para el grupo 1 y de paso le ponemos en el grupo "total"
    printf("Grupo 1\n");
    cargar_matricula(grupo1,cant_g1);
    ordenar(grupo1,cant_g1);
    for (int i = 0; i < cant_g1; i++)
        grupo_total[cont++]=grupo1[i];

    //Hacemos las operaciones de cargar y ordenar para el grupo 1 y de paso le ponemos en el grupo "total"
    printf("Grupo 2\n");
    cargar_matricula(grupo2,cant_g2);
    ordenar(grupo2,cant_g2);
    for (int i = 0; i < cant_g2; i++)
        grupo_total[cont++]=grupo2[i];

    //Ordenamos el grupo total y mostramos despues
    ordenar(grupo_total,total);
    printf("\nMATRICULAS\n");
    for (int i = 0; i < total; i++)
        printf("%d ", grupo_total[i]);
    return 0;
}
