#include <stdio.h>
/*Leer un vector A de 50 componentes y un escalar X y calcular e imprimir la suma de
la multiplicación del escalar por el vector. Ejemplo: A(1,2,3)
Producto escalar = (1*4) + (2*4) + (3*4)*/
int main()
{
    // Inicializamos variables y pedimos el escalar
    int A[50], X, suma;
    suma = 0;
    printf("Introduzca el escalar: ");
    scanf("%d", &X);

    // Vamos pidiendo los valores de los componentes del vector
    // Y sumando la multiplicación del escalar por el vector
    for (int i = 0; i < 50; i++)
    {
        printf("Introduzca un valor: ");
        scanf("%d", &A[i]);
        suma += (A[i] * X);
    }

    // Imprimimos la suma
    printf("El resultado final es: %d", suma);
    return 0;
}