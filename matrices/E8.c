/*Se tienen en memoria una matriz M de orden N. Hacer un algoritmo que permita cambiar los valores 
de la primera fila con la última columna y viceversa*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cambio(int M[100][100], int N) {
    for (int i = 0; i < N; i++) {
        int aux = M[0][i];
        M[0][i] = M[i][N-1];
        M[i][N-1] = aux;
    }

    printf("\nMatriz cambiada:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    int N;
    printf("Ingrese el tamano de la matriz: ");
    scanf("%d", &N);
    int M[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            M[i][j] = rand() % 100;
            printf("%2d ", M[i][j]);
        }
        printf("\n");
    }

    cambio(M, N);

    return 0;
}
