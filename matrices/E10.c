/*Generar una tabla A(4,4) de tal forma que sus filas pares sean múltiplos de 2 y los impares múltiplos de 3, 
imprimirla, hallar la suma de todos sus elementos.*/

#include <stdio.h>

int main(){
    int A[4][4] = {0}, sum=0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if ((i+1)%2 == 0)
                A[i][j] = (i)*2 + (j)*2;
            else
                A[i][j] = (i+1)*3 + (j)*3;
            printf("%3d ", A[i][j]); //Asi nms ya, queria hacer más facha pero no me sale
            sum+= A[i][j];
        }
        printf("\n");
    }
    printf("La suma de todos sus elementos es: %d\n", sum);
    return 0;
}