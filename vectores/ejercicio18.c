#include <stdio.h>
/*Hallar la unión de A y B en un nuevo vector C, de manera que el vector C, no tenga elementos repetidos.*/

#define MAXIMO 100 // Tamaño máximo del vector C

//Funcion para cargar los vectores
void cargar(int vec[], int longitud) 
{
    for (int i = 0; i < longitud; i++) {
        printf("Ingrese elemento:");
        scanf("%d", &vec[i]);
    }
}

//Funcion para detectar si un elemento ya esta en el vector C
//Y devuelve 1 si el numero ya esta en el vector y en caso contrario 0
int estaEnC(int C[], int cant, int num) {
    for (int i = 0; i < cant; i++) {
        if (C[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int N, C[MAXIMO], cant = 0;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &N);
    }

    //Inicializamos vector B, A y C y cargamos los componentes a los vectores B y A
    int B[N],A[N];
    printf("\nCargando vector B\n");
    cargar(B,N);
    printf("\nCargando vector A\n");
    cargar(A,N);

    // Encontrar la unión de A y B sin elementos repetidos, utilizando la funcion anterior 
    //de ver si esta en la funcion o no
    for (int i = 0; i < N; i++) 
        if (!estaEnC(C, cant, B[i]))
            C[cant++] = B[i];

    for (int i = 0; i < N; i++)
    {
        if (!estaEnC(C, cant, A[i]))
            C[cant++] = A[i];
    }

    //Mostrando el vector C
    for (int i = 0; i < cant; i++)
        printf("%d ", C[i]);
    return 0;
}