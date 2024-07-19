/*Ingresar un vector de 12 elementos y volcarlo a una matriz de 4* 3. Imprimir la matriz*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int vector[12]) {
    srand(time(NULL));
    printf("Vector:\n");
    for (int i = 0; i < 12; i++){
        vector[i] = rand()%100;
        printf("%2d ", vector[i]);
    }
}

void imprimir(int matriz[4][3]) {
    printf("\nMatriz:\n");  
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) 
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }
}

void volcar(int vector[12], int matriz[4][3]) {
    int c = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) 
            matriz[i][j] = vector[c++];
    }
}

int main() {
    int vector[12], matriz[4][3];
    cargar(vector);
    volcar(vector, matriz);
    imprimir(matriz);
    return 0;
}