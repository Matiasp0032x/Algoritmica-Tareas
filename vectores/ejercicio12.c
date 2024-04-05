#include <stdio.h>
#include<time.h>
#include <stdlib.h>
/*Se tiene en memoria un vector B, cuyos elementos son solamente 1 y 0 (vector binario). 
También se tiene en memoria los vectores L y M, todos de tamaño N. Hacer un algoritmo que 
permita crear un vector A tal que: 
A(X) = L(X) si B(X) = 0
A(X) = M(X) si B(X) = 1 */
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int N;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &N);
    }

    //Inicializamos vector B, L, M, y A y empezamos a cargar los componentes
    int B[N], L[N], M[N], A[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
    //Hacemos que solo sean 0 y 1 los valores de los componentes del vector B
        B[i]=rand() % 2;

        printf("Ingrese un valor para el elemento %d del vector L: ", i+1);
        scanf("%d", &L[i]);
        printf("Ingrese un valor para el elemento %d del vector M: ", i+1);
        scanf("%d", &M[i]);

    //Cargamos el vector A dependiendo de B
        if (B[i]==0)
            A[i]=L[i];
        else
            A[i]=M[i];
    }

    //Imprimimos los vectores
    for (int i = 0; i < N; i++)
        printf("B%d=%d\tL%d=%d\tM%d=%d\tA%d=%d\n", i+1,B[i],i+1,L[i],i+1,M[i],i+1,A[i]);
    return 0;
}