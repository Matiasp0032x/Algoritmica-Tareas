/*Calcular la suma de la zona indicada en la figura, siendo datos m, n, p, q y los elementos de la matriz:
    1           - - - - - - - - - - 
                - - - - - - - - - -
    p           - - * * * * * * - -
                - - * - - - - * - -
                - - * - - - - * - -
                - - * * * * * * - -
                - - - - - - - - - -
    m           - - - - - - - - - -
                1    q             n
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumaZonal(int m, int n, int p, int q, int matriz[m][n]) {
    int suma = 0;
    for (int i = p; i <= q; i++) {  
        for (int j = p; j <= q; j++){
            if (i == p || i == q || j == p || j == q)
                suma += matriz[i][j];
        }
    }
    return suma;
}

int main() {
    srand(time(NULL));
    int m, n, p, q;
    printf("Ingrese el numero de filas y columnas: ");
    scanf("%d %d", &m, &n);
    
    int matriz[m][n];
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            matriz[i][j] = rand()%100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Ingrese el valor de p y q: ");
    scanf("%d %d", &p, &q);
    p--;q--;
    int suma = sumaZonal(m, n, p, q, matriz);
    printf("La suma de la zona indicada es: %d\n", suma);
    
    return 0;
}