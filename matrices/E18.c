/*Ordenar la matriz A[m,n], conforme a la regla mostrada en el ejemplo siguiente:

24 11 71    03 24 48
48 46 03    09 37 71
09 75 37    11 46 75*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

void ordenar(int A[100][100], int m, int n) {
    int vector[m*n], cont = 0;

    // Convertir la matriz a un vector unidimensional
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
            vector[cont++] = A[i][j];
    }

    // Ordenar el vector
    qsort(vector, m * n, sizeof(int), comparar);

    // Volver a llenar la matriz por columnas
    cont = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            A[i][j] = vector[cont++];
        }
    }

    // Imprimir la matriz ordenada
    printf("\nMatriz ordenada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%2d ", A[i][j]);
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    int m, n;
    printf("Ingrese el numero de filas y columnas: ");
    scanf("%d %d", &m, &n);
    int A[100][100];

    // Llenar la matriz con valores aleatorios y mostrarla
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 100;
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    ordenar(A, m, n);
    return 0;
}
