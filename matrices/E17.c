/*Ingresar dos números positivos menores a 7 y una matriz de 6 * 6. Llenar de ceros en la fila 
correspondiente al primer número ingresado y en la columna correspondiente al segundo número. 
Imprimir la matriz resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int matriz[6][6], int num1, int num2) {
    srand(time(NULL));
    printf("\nMatriz:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (!(i == (num1-1) || j == (num2-1)))
                matriz[i][j] = rand()%100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int num1, num2, matriz[6][6] = {0};
    printf("Ingrese el primer y segundo numero (1-6): ");
    scanf("%d %d", &num1, &num2);
    while (num1 < 1 || num1 > 6 || num2 < 1 || num2 > 6) {
        printf("Error de Introduccion. Haga de nuevo:\n");
        scanf("%d %d", &num1, &num2);
    }
    cargar(matriz, num1, num2);
    return 0;
}