#include <stdio.h>
/*Realizar una algoritmo que muestre la tabla de multiplicar de un número introducido por teclado.*/
int main()
{
    int n,mult;
    printf("Ingrese un numero para saber su tabla: ");
    scanf("%d",&n);
    mult=n;
    for (int i = 0; i <= 10; i++)
    {
        mult=n*i;
        printf("%d\n", mult);
    }
    return 0;
}
