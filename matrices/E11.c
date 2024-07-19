/*Realizar la transferencia de los elementos de la diagonal principal en la diagonal secundaria
y viceversa de una matriz llamada MAT (n,n)*/

#include <stdio.h>

void transferencia(int matriz[100][100], int n) {
    for(int i = 0; i < n; i++) {
        int aux = matriz[i][i];
        matriz[i][i] = matriz[i][n-1-i];
        matriz[i][n-1-i] = aux;
    }
    printf("\nMatriz cambiada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Ingrese el tamano de la matriz: ");
    scanf("%d", &n);
    
    int MAT[100][100];
    
    printf("Ingrese los elementos de la matriz:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            scanf("%d", &MAT[i][j]);
    }
    printf("\nMatriz original:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%2d ", MAT[i][j]);
        printf("\n");
    }

    transferencia(MAT, n);
    return 0;
}
