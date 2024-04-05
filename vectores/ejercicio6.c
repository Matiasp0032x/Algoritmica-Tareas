#include <stdio.h>
/*Dado un vector de K componentes, hacer un algoritmo que permita hallar el mayor y 
el menor elemento del vector con sus posiciones respectivas*/
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int K, mayor, menor, posmayor, posmenor;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &K);

    //Validamos el rango del vector
    while (K<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &K);
    }

    //Inicializamos vector y empezamos a cargar los componentes
    int vec[K];
    for (int i = 0; i < K; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &vec[i]);

    //Determinamos que el primer componente es el mayor y menor
    //y luego vamos comparando con los demas componentes
        if (i==0)
            mayor=menor=vec[0];
        if (vec[i]>mayor){
            mayor=vec[i];
            posmayor=i;
        }
        if (vec[i]<menor){
            menor=vec[i];
            posmenor=i;
        }
    }

    //Imprimiendo resultado
    printf("El mayor elemento del vector es: %d y se encuentra en: %d\n", mayor, posmayor);
    printf("El menor elemento del vector es: %d y se encuentra en: %d", menor, posmenor);
    return 0;
}
