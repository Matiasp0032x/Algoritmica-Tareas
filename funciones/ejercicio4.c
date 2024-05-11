/*Los alumnos de una materia se dividen en dos secciones llamadas sección 1 y sección 2. 
Cada sección tiene su propia lista de alumnos en la cual figuran sus números de matricula. 
Escribir un algoritmo que reciba la cantidad de alumnos y los números de matricula en cada 
sección, forme dos arreglos con los datos de cada sección y luego combine ambas listas en 
una sola, ordenada por número de matricula.*/

#include <stdio.h>

//Funcion para ordenar un vector de menor a mayor
void ordenar(int vec[], int n){
    int aux;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if (vec[j]>vec[j+1]){
                aux=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=aux;
            }
        }
    }
}

//Funcion para combinar 2 vectores y crear uno 3ro
void combinar_vectores(int vec1[], int vec2[], int vec3[], int cant1, int cant2){
    int cant3=0;
    for (int i = 0; i < cant1; i++){
        vec3[cant3]=vec1[i];
        cant3++;
    }
    for (int i = 0; i < cant2; i++){
        vec3[cant3]=vec2[i];
        cant3++;
    }
}

int main()
{
    //Declaramos las variables de las cantidades de los alumnos
    int cant_sec1,cant_sec2, cant_total_alum;

    //1ra Seccion
    printf("Ingrese la cantidad de alumnos de la 1ra seccion: ");
    scanf("%d",&cant_sec1);
    while (cant_sec1<1)
    {
        printf("\nERROR\nIngrese la cantidad de alumnos de la 1ra seccion: ");
        scanf("%d",&cant_sec1);
    }

    //Cargamos la lista de la 1ra seccion con sus matriculas 
    int lista1[cant_sec1];
    for (int i = 0; i < cant_sec1; i++)
    {
        printf("La matricula del estudiante %d es: ", i+1);
        scanf("%d", &lista1[i]);
    }

    //2da Seccion
    printf("Ingrese la cantidad de alumnos de la 2da seccion: ");
    scanf("%d",&cant_sec2);
    while (cant_sec2<1)
    {
        printf("\nERROR\nIngrese la cantidad de alumnos de la 2da seccion: ");
        scanf("%d",&cant_sec2);
    }

    //Cargamos la lista de la 2da seccion con sus matriculas 
    int lista2[cant_sec2];
    for (int i = 0; i < cant_sec2; i++)
    {
        printf("La matricula del estudiante %d es: ", i+1);
        scanf("%d", &lista2[i]);
    }

    //Total de alumnos
    cant_total_alum = cant_sec1 + cant_sec2;

    //Cargamos la lista completa de los alumnos con sus matriculas y la ordenamos
    int lista_total[cant_total_alum];
    combinar_vectores(lista1,lista2,lista_total,cant_sec1,cant_sec2);
    ordenar(lista_total, cant_total_alum);

    //Mostramos el vector
    for (int i = 0; i < cant_total_alum; i++)
        printf("%d ", lista_total[i]);

    return 0;
}
