/*Dada la matriz A[m,n], determinar si la misma tiene dos filas iguales*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Ingrese el número de filas y columnas: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Ingrese los elementos de la matriz A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int filas_iguales = 0;
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            int encontrado = 1;
            for (int k = 0; k < n; k++) {
                if (A[i][k] != A[j][k]) {
                    encontrado = 0;
                    break;
                }
            }
            if (encontrado) {
                filas_iguales++;
                break;
            }
        }
    }

    if (filas_iguales > 0)
        printf("La matriz A tiene %d filas iguales.\n", filas_iguales);
    else
        printf("La matriz A no tiene filas iguales.\n");

    return 0;
}