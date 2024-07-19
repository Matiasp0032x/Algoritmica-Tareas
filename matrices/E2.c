/*Dada la matriz A[n,n], encontrar cuál de sus diagonales tiene mayor suma.*/

#include <stdio.h>

void cargar(int A[100][100], int n) {
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }
}
int diagonalMayor(int A[100][100], int n) {
    int diagonal1 = 0, diagonal2 = 0;

    for (int i = 0; i < n; i++)
        diagonal1 += A[i][i];

    for (int i = 0; i < n; i++)
        diagonal2 += A[i][n - i - 1];

    return (diagonal1 > diagonal2) ? diagonal1 : diagonal2;
}

int main() {
    int n;
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &n);
    int A[n][n];
    cargar(A, n);
    printf("La diagonal con mayor suma es: %d\n", diagonalMayor(A, n));
    return 0;
}