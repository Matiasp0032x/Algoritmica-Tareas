/*Ingresar una matriz de 5 * 3 y crear una nueva matriz que sea la traspuesta de la primera y luego imprimirla.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int matriz[5][3]) {
    srand(time(NULL));
    printf("Matriz de 5*3:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand()%100;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void transponiendo(int matriz[5][3], int traspuesta[3][5]) {
    printf("\nMatriz 3*5:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            traspuesta[i][j] = matriz[j][i];
            printf("%2d ", traspuesta[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[5][3] = {0}, traspuesta[3][5] = {0};
    cargar(matriz);
    transponiendo(matriz, traspuesta);
    return 0;
}