/*Encontrar la solución minimax de las columnas de una matriz de orden M*N. 
Minimax es el mínimo entre los máximos.*/

#include <stdio.h>

int main()
{
    int m, n;
    printf("Ingrese el numero de filas y columnas: ");
    scanf("%d %d", &m, &n);
    
    int matriz[m][n];
    printf("Ingrese los valores de la matriz:\n");
    for (int f = 0; f < m; f++) {
        for (int c = 0; c < n; c++) 
            scanf("%d", &matriz[f][c]);
    }

    int max_columna[m], max = matriz[0][0] ,indice_c = 0;
    for (int c = 0; c < n; c++) {
        for (int f = 1; f < m; f++) {
            if (matriz[f][c] > max){
                max = matriz[f][c];
                indice_c = c ;
            }
        }
    }

    for (int f = 0; f < m; f++)
        max_columna[f] = matriz[f][indice_c];    

    printf("El minimax de las columnas es:\n");
    int min = max_columna[0];
    for (int f = 1; f < m; f++) {
        if (min > max_columna[f])
            min = max_columna[f];
    }
    printf("%d\n", min);

    return 0;
}