/*Una cadena de almacenes de un producto tiene 6 almacenes, cada almacén tiene 10 departamentos iguales. 
Las ventas semanales de la cadena de almacenes están guardadas en una matriz de 6*10. A(i,j) denota las 
ventas semanales en el almacén (i), en el departamento (j).
Imprimir:
Las ventas semanales totales de cada almacén
Las ventas semanales totales de cada departamento
Las ventas semanales totales de la cadena de almacenes*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculo_alamacen(int ventas[6][10], int x) {
    int total = 0;
    for (int i = 0; i < 10; i++)
        total += ventas[x][i];
    return total;
}

int calculo_depa(int ventas[6][10], int x) {
    int total = 0;
    for (int i = 0; i < 6; i++)
        total += ventas[i][x];
    return total;
}

int main() {
    srand(time(NULL));
    int ventas[6][10], total = 0 ;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            ventas[i][j] = 1+rand()%1;
            printf("%4d ",ventas[i][j]);
            total += ventas[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < 6; i++)
        printf("La venta semanal total del almacen %d es: %d\n", i+1, calculo_alamacen(ventas, i));
    for (int i = 0; i < 10; i++)
        printf("La venta semanal total del departamento %d es: %d\n", i+1, calculo_depa(ventas, i));
    printf("La venta semanal total es: %d\n", total);
    return 0;
}