#include <stdio.h>
/*Hacer un algoritmo que permita contar los elementos del vector que sean múltiplos de 3 y de 5. 
También se desea obtener el promedio de los elementos ubicados en posiciones impares.*/
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int N, sum, mult15, cont_imp;
    sum=mult15=cont_imp=0;
    float prom;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &N);
    }

    //Inicializamos vector y cargamos los componentes
    int vec[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &vec[i]);

        //Verificamos si es multiplo de 15
        if (vec[i]%15==0)
            mult15++;

    //Verificamos si la posicion es impar y si es asi sumamos el elemento y aumentamos contador
        if ((i+1)%2==1){
            sum+=vec[i];
            cont_imp++;
        }
    }

    //Calculando el promedio e imprimiendo los resultados
    prom=(float) sum/cont_imp;
    printf("La cantidad de multiplos de 15 dentro del rango del vector es: %d multiplos\n", mult15);
    printf("El promedio de las posiciones impares es: %.2f", prom);
    return 0;
}