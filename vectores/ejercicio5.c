#include <stdio.h>
/*Dado un vector de N elementos, hacer un algoritmo que permita hallar el mayor elemento del vector*/
int main()
{

    //Inicializamos variables y pedimos el rango del vector
    int N, mayor;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &N);
    }

    //Inicializamos vector y empezamos a cargar los componentes
    int vec[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &vec[i]);

    //Determinamos que el primer componente es el mayor y luego vamos comparando con los demas componentes
        if (i==0)
            mayor=vec[0];
        if (vec[i]>mayor)
            mayor=vec[i];
    }

    //Imprimiendo resultado
    printf("El mayor elemento del vector es: %d", mayor);
    return 0;
}
