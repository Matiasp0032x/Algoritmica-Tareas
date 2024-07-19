/*Un caballo esta ubicado en una de las posiciones de un tablero de ajedrez. Se requiere averiguar 
que nueva posición podrá tomar después de una jugada. Realice el algoritmo para varios datos de 
entrada siendo estás las posiciones iniciales del caballo.*/

#include <stdio.h>
#include <stdlib.h>

#define N 8

void cargarTablero(char tablero[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            tablero[i][j] = '.';
    }
}

void mostrarTablero(char tablero[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

void calcularMovimientos(int x, int y, int movimientos[8][2]) {
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

    for (int i = 0; i < 8; i++) {
        movimientos[i][0] = x + dx[i];
        movimientos[i][1] = y + dy[i];
    }
}

void mostrarMovimientos(char tablero[N][N], int movimientos[8][2]) {
    for (int i = 0; i < 8; i++) {
        int x = movimientos[i][0];
        int y = movimientos[i][1];
        if (x >= 0 && x < N && y >= 0 && y < N) {
            tablero[x][y] = '*';
        }
    }
}

void limpiarMovimientos(char tablero[N][N], int movimientos[8][2]) {
    for (int i = 0; i < 8; i++) {
        int x = movimientos[i][0];
        int y = movimientos[i][1];
        if (x >= 0 && x < N && y >= 0 && y < N) {
            tablero[x][y] = '.';
        }
    }
}

int main() {
    char tablero[N][N];
    int x, y;

    printf("Ingrese la posicion inicial del caballo (fila columna): ");
    scanf("%d %d", &x, &y);
    x--; y--;

    cargarTablero(tablero);
    tablero[x][y] = 'K';

    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {

        int movimientos[8][2];
        calcularMovimientos(x, y, movimientos);

        mostrarMovimientos(tablero, movimientos);

        printf("\nTablero con posibles movimientos:\n");
        mostrarTablero(tablero);

        printf("Ingrese la nueva posicion del caballo (fila columna) o -1 -1 para salir: ");
        int nuevo_x, nuevo_y;
        scanf("%d %d", &nuevo_x, &nuevo_y);

        if (nuevo_x == -1 && nuevo_y == -1) {
            break;
        }
        
        nuevo_x--; nuevo_y--;

        int movimiento_valido = 0;
        for (int i = 0; i < 8; i++) {
            if (movimientos[i][0] == nuevo_x && movimientos[i][1] == nuevo_y) {
                movimiento_valido = 1;
                break;
            }
        }

        if (movimiento_valido) {
            limpiarMovimientos(tablero, movimientos);
            tablero[x][y] = '.';
            x = nuevo_x;
            y = nuevo_y;
            tablero[x][y] = 'K';
            mostrarTablero(tablero);
        } else {
            printf("Movimiento invalido. Intente de nuevo.\n");
        }

        printf("Desea continuar? (s/n): ");
        scanf(" %c", &continuar);
        system("cls"); 
    }

    printf("Gracias por jugar!\n");
    return 0;
}
