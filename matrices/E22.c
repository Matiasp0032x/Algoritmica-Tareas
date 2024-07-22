/*Se cuenta como dato con una matriz A de orden N, se pide formar el vector Z, a partir de los datos de la matriz,
siguiendo la regla que se muestra en el sgte diagrama de ejemplo:
Matriz A
04 -2 09 10
03 11 01 32
08 05 -4 -1
06 19 17 07
Vector Z
10 9 32 -1 1 -2 4 11 -4 7 17 5 3 8 19 6*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void transformando_a_vectorZ(int n, int A[n][n]){
    int Z[n*n], cont = 0;
    int direction = -1; 
    
    for (int k = 0; k < 2 * n - 1; k++) {
        if (direction == 1) {
            int i = (k < n) ? 0 : k - n + 1;
            int j = (k < n) ? k : n - 1;
            while (i < n && j >= 0) {
                Z[cont++] = A[i][j];
                i++;
                j--;
            }
        }
        else {
            int i = (k < n) ? k : n - 1;
            int j = (k < n) ? 0 : k - n + 1;
            while (i >= 0 && j < n) {
                Z[cont++] = A[i][j];
                i--;
                j++;
            }
        }
        direction *= -1;
    }

    printf("Vector Z: ");
    for (int i = 0; i < n*n; i++) {
        printf("%2d ", Z[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Ingrese el orden de la matriz: ");
    scanf("%d", &n);

    int A[n][n];
    srand(time(NULL));
    printf("Matriz A:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            A[i][j] = rand() % 100;
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    transformando_a_vectorZ(n, A);
    return 0;
}
