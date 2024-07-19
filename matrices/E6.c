/*Encontrar el producto de las matrices Q[m,n] y P[n,m].*/

#include <stdio.h>

void cargar(int matriz[100][100], int m, int n){
    printf("Ingrese los elementos de la matriz %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    }
}

void producto(int Q[100][100], int P[100][100], int m, int n){
    int R[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            R[i][j] = P[i][j]*Q[i][j];
    }
    
    printf("El producto de las matrices es:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", R[i][j]);
        printf("\n");
    }
}

int main()
{
    int m,n;
    printf("Ingrese el numero de filas y columnas de las matrices: ");
    scanf("%d %d", &m, &n);
    
    int Q[m][n], P[m][n];
    cargar(Q, m, n);
    cargar(P, m, n);
    producto(Q, P, m, n);
    return 0;
}
