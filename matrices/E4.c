/*Escribir un algoritmo que permita encontrar la sumatoria de los elementos que están en la
diagonal principal, sabiendo que la matriz se llama A de orden M.*/

#include <stdio.h>

int main() {
    int m;
    printf("Ingrese el orden de la matriz: ");
    scanf("%d", &m);
    int A[m][m];
    int sum = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("Ingrese el elemento A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        sum += A[i][i];
    }

    printf("Suma de elementos en la diagonal principal: %d\n", sum);

    return 0;
}