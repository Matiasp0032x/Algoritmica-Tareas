/*Escribir un algoritmo para jugar el rompecabezas del 15. El mismo consiste en una matriz de 4 filas y 
4 columnas que contiene 15 elementos ocupados con los números del 1 al 15 encontrándose el elemento [4,4]
ocupado por un valor especial (cero). La característica del valor especial es que el mismo puede 
desplazarse dentro de la matriz al intercambiarse con un elemento contiguo que se encuentre en 
la misma fila o columna. En la medida que este elemento se desplaza por la matriz se va perdiendo el orden inicial.
    01 02 03 04
    05 06 07 08 
    09 10 11 12
    13 14 15 --
El objetivo del juego consiste en devolver el orden a la matriz, una vez que la misma ha sido desordenada 
por sucesivos desplazamientos del valor cero. El algoritmo debe producir una situación de matriz 
desordenada mediante movimientos aleatorios del valor cero y permitir luego al jugador la oportunidad 
de reordenar la matriz mediante una secuencia de movimientos del valor cero.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == 0)
                printf(" - ");
            else
                printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int verifRepeticion(int num, int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (num == matriz[i][j])
                return 0;
        }
    }
    return 1;
}

int verifOrden(int matriz[4][4]) {
    int contador = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 3 && j == 3 && matriz[i][j] == 0) {
                return 1;
            } else if (matriz[i][j] != contador && !(i == 3 && j == 3)) {
                return 0;
            }
            contador++;
        }
    }
    return 1;
}

void juego(int matriz[4][4]) {
    int x = 3, y = 3; 
    while (!verifOrden(matriz)) {
        imprimir(matriz);
        int fila, columna;
        do {
            printf("\nIntroduce las coordenadas del cero donde lo deseas mover (fila columna): ");
            scanf("%d %d", &fila, &columna);
            fila--; columna--;
        } while (fila < 0 || fila >= 4 || columna < 0 || columna >= 4 || ((abs(columna - y) != 1) && (abs(fila - x) != 1)));

        int aux = matriz[x][y];
        matriz[x][y] = matriz[fila][columna];
        matriz[fila][columna] = aux;
        x = fila;
        y = columna;

        system("CLS");
    }
    printf("Felicidades. Has ordenado la matriz.\n");
}

int main() {
    int matriz[4][4], random;
    srand(time(NULL));
    printf("Bienvenido al juego de la rompecabezas 15, donde tendras que ordenar esto: \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            matriz[i][j] = -1;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            do {
                if (i == 3 && j == 3)
                    random = 0;
                else
                    random = 1 + rand() % 15;
            } while (!verifRepeticion(random, matriz));
            matriz[i][j] = random;
        }
    }

    juego(matriz);
    return 0;
}