/*Encontrar el producto de las matrices Q[m,n] y P[n,m].*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void producto(int m, int n, int P[n][m], int Q[m][n]) {
    int R[m][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            R[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++)
                R[i][j] += Q[i][k] * P[k][j];
        }
    }

    printf("El producto de las matrices es:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            printf("%5d ", R[i][j]);
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    int m, n;
    printf("Ingrese el numero de filas y columnas de las matrices: ");
    scanf("%d %d", &m, &n);

    int Q[m][n], P[n][m];

    cargar(m, n, Q);
    printf("\n");
    cargar(n, m, P);
    printf("\n");
    producto(m, n, P, Q);

    return 0;
}
