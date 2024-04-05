#include <stdio.h>

/*Crea una aplicación que pida un número y calcule su factorial 
(El factorial de un número es el producto de todos los enteros entre 
1 y el propio número y se representa por el número seguido de un 
signo de exclamación. Por ejemplo 5! = 1x2x3x4x5=120)*/

int main()
{
    int n, result=1;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result*=i;
    }
    printf("%d!=%d", n, result);
    return 0;
}
