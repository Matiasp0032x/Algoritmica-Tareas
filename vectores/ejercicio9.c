#include <stdio.h>
/*Se tiene en memoria un vector A de K componentes. Hacer un algoritmo que permita obtener la 
sumatoria de todos los elementos ubicados en posiciones pares.*/
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int K, sum=0;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &K);

    //Validamos el rango del vector
    while (K<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &K);
    }

    //Inicializamos vector y cargamos los componentes
    int vec[K];
    for (int i = 0; i < K; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &vec[i]);

    //Verificamos si la posicion es par y si es asi sumamos el elemento
        if ((i+1)%2==0)
            sum+=vec[i];
    }

    //Imprimiendo resultado
    printf("El resultado de la sumatoria de las posiciones pares es: %d", sum);
    return 0;
}
