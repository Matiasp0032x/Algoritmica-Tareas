/*En la matriz LABERINTO(M,N), cada elemento puede valer 0 ó 1. Se pide encontrar un camino posible para ir del
elemento (1,1), al elemento (M,N) pasando solalamente por cuadros con valor cero*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int m, int n, int laberinto[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", laberinto[i][j]);
        printf("\n");
    }
    printf("\n");
}

void imprimirCa(int m, int n, char camino[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%c ", camino[i][j]);
        printf("\n");
    }
    printf("\n");
}

//Función recursiva para encontrar el camino en el laberinto
int encontrarCamino(int m, int n, int laberinto[m][n], char camino[m][n], int x, int y) {
    //Si se llega al final, marcamos con X y salimos con return 1, para indicar q si hay
    if (x == m - 1 && y == n - 1) {
        camino[x][y] = 'X';
        return 1;
    }

    //Verificamos si la posicion es válida
    if (x >= 0 && x < m && y >= 0 && y < n && laberinto[x][y] == 0 && camino[x][y] != 'X') {
        camino[x][y] = 'X';

        //Movemos hacia abajo
        if(encontrarCamino(m, n, laberinto, camino, x + 1, y)) return 1;
        //Movemos a la derecha
        if (encontrarCamino(m, n, laberinto, camino, x, y + 1)) return 1;
        //Movemos a la izquierda
        if(encontrarCamino(m, n, laberinto, camino, x, y - 1)) return 1;
        //Movemos hacia arriba
        if(encontrarCamino(m, n, laberinto, camino, x - 1, y)) return 1;
        //Si ninguna de las opciones no funca, desmarcarcamos la posición
        camino[x][y] = '-';
    }
    return 0;
}

void camino(int m, int n, int laberinto[m][n]) {
    char camino[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            camino[i][j] = '-';
    }

    if (encontrarCamino(m, n, laberinto, camino, 0, 0)) {
        printf("Camino encontrado:\n");
        imprimirCa(m, n, camino);
    } else {
        printf("No se encontro un camino\n");
    }
}

int main() {
    srand(time(NULL));
    int m, n;
    printf("Ingrese la cantidad de filas y columnas: ");
    scanf("%d %d", &m, &n);
    int laberinto[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            laberinto[i][j] = rand() % 2;
    }

    printf("Laberinto:\n");
    imprimir(m, n, laberinto);
    camino(m, n, laberinto);
    return 0;
}
