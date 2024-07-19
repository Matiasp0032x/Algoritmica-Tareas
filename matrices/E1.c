/*Escribir un algoritmo que permita cargar una matriz de orden 5*4, y calcular la suma y el 
promedio de todos sus elementos. Imprimir el resultado.*/

#include <stdio.h>

void cargar(int matriz[5][4]){
    int suma = 0;
    float promedio;
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            printf("Ingrese el elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            suma += matriz[i][j];
        }
    }
    promedio = (float)suma / 20;
    printf("La suma de todos los elementos es: %d y el promedio es: %.2f\n", suma, promedio);
}
int main()
{
    int matriz[5][4];
    cargar(matriz);
    return 0;
}