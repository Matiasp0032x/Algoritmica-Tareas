/*Lea N registros con datos donde cada registro tiene dos numeros grabados (A y B)
Se pide calcular e imprimir Y siendo: 
    n
Y  Σ Xi
    i=1
En donde: Xi = A+B Si (A^2 - B^2)>0
Xi = A-2B Si (A^2 - B^2)=0
Xi = A+B-5 Si (A^2 - B^2)<0*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int resta_cuad(int A, int B){
    return A*A-B*B;
} 

int main() {
    int N;
    srand(time(NULL));
    printf("Ingrese la cantidad de registros (N): ");
    scanf("%d", &N);

    int A, B,Xi;
    int suma = 0;

    for (int i = 1; i <= N; i++) {
        A=1+rand()%100;
        B=1+rand()%100;
        printf("A=%d\tB=%d\n",A,B);

        if (resta_cuad(A,B) > 0) 
            Xi = A + B;
        else if (resta_cuad(A,B) == 0) 
            Xi = A - 2*B;
        else 
            Xi = A + B-5;

        suma += Xi;
    }

    printf("\nEl valor de Y es: %d\n", suma);

    return 0;
}
