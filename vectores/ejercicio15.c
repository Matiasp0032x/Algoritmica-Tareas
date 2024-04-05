#include <stdio.h>
/*Sabiendo que se tiene en memoria los vectores P, A, M de tamaños H, J, I respectivamente. 
Hacer un algoritmo que permita crear un vector Z de tal manera que P sea la primera parte 
de Z, A este a continuación y M sea la última parte.*/

void inicializacion(int *x) 
{
    // Inicializamos variables y pedimos los rangos de los vectores
    printf("Introduzca el rango del vector: ");
    scanf("%d", x);
    // Validamos los rangos de los vectores
    while (*x < 1) {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", x);
    }
}

void cargar(int vec[], int longitud) 
{
    for (int i = 0; i < longitud; i++) {
        printf("Ingrese elemento:");
        scanf("%d", &vec[i]);
    }
}

int main()
{
    int H, J, I;
    inicializacion(&H);
    inicializacion(&J);
    inicializacion(&I);

    // Inicializamos vector P, A, M y Z y empezamos a cargar los componentes
    int P[H], A[J], M[I], Z[H + J + I];

    printf("Cargando el vector P\n");
    cargar(P, H);
    printf("Cargando el vector A\n");
    cargar(A, J);
    printf("Cargando el vector M\n");
    cargar(M, I);

    //Vamos cargando de posicion en posicion los elementos de Z comenzando del vector P hasta el vector M
    int pos = 0;
    for (int i = 0; i < H; i++) 
        Z[pos++] = P[i];
    for (int i = 0; i < J; i++) 
        Z[pos++] = A[i];
    for (int i = 0; i < I; i++) 
        Z[pos++] = M[i];

    //Imprimimos el vector Z
    printf("El vector Z\n");
    for (int i = 0; i < H + J + I; i++) {
        printf("%d ", Z[i]);
    }
    return 0;
}