#include <stdio.h>
/*Se tiene en memoria un vector A de longitud N, hacer un algoritmo que imprima todas las 
posiciones de los elementos de A que sean iguales a una X leída*/
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int N,X;
    printf("Ingrese un numero: ");
    scanf("%d", &X);
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
    int A[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &A[i]);

    //Comparamos si los elementos son iguales 
        if (X==A[i])
            printf("La posicion %d, su valor es igual al numero pedido\n", i+1);
    }
    return 0;
}
