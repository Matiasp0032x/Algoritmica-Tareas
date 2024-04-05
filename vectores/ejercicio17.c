#include <stdio.h>
/*Leer dos vectores A y B ambos de longitud N y luego calcular e imprimir el vector C 
que sea la suma de A y B sabiendo que:  C(I) = A(I) + B(I*/

void cargar(int vec[], int longitud) 
{
    for (int i = 0; i < longitud; i++) {
        printf("Ingrese elemento:");
        scanf("%d", &vec[i]);
    }
}

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

    //Inicializamos vector B, A y C y cargamos los componentes
    int B[N],A[N],C[N];
    printf("\nCargando vector B\n");
    cargar(B,N);
    printf("\nCargando vector A\n");
    cargar(A,N);
    for (int i = 0; i < N; i++)
    {
        C[i]=A[i]-B[i];
    }
    for (int i = 0; i < N; i++)
        printf("B%d=%d\tA%d=%d\tC%d=%d\n", i+1,B[i],i+1,A[i],i+1,C[i]);
    return 0;
}
