/*Hacer un algoritmo que permita encontrar el mayor elemento del triángulo 
superior de una matriz M de orden L*/

#include <stdio.h>

void encontrar_mayor_triangulo_sup(int M[100][100], int L) {
    int mayor = M[0][0];
    for (int i = 0; i < L; i++) {
        for (int j = i; j < L; j++) {
            if (M[i][j] > mayor) {
                mayor = M[i][j];
            }
        }
    }
    printf("El mayor elemento del triángulo superior es: %d\n", mayor);
}

int main() {
    int l;
    printf("Ingrese el orden de la matriz: ");
    scanf("%d", &l);
    int A[100][100]; // Definimos un tamaño máximo para la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    encontrar_mayor_triangulo_sup(A, l);
    return 0;
}
