/*Leer una matriz de orden (M, N) y asignarle valores según se indica
1 2 3 4
4 1 2 3
3 4 1 2
cuadrado latino*/

#include <stdio.h>

void cargar(int matriz[100][100], int m, int n) {
    for (int i = 0; i < n; i++) 
        matriz[0][i] = i + 1; 

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = matriz[i-1][(j+n-1) % n];
        }
    }
}

int main() {
    int m, n;
    printf("Ingrese el numero de filas y columnas: ");
    scanf("%d %d", &m, &n);

    int matriz[100][100];

    // Inicializar la matriz a cero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            matriz[i][j] = 0;  
    }

    cargar(matriz, m, n);

    printf("Matriz cargada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    return 0;
}
