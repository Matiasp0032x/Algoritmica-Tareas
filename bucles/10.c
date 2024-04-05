#include <stdio.h>
/*Algoritmo que muestre la tabla de multiplicar de los números 1,2,3,4 y 5.*/
void tabla(int x)
{
    int mult;
    mult=x;
    for (int i = 0; i <= 10; i++)
    {
        mult=x*i;
        printf("%d*%d = %d\n", x, i, mult);
    }
}

int main()
{
    printf("\nTABLA DEL 1\n");
    tabla(1);
    printf("\nTABLA DEL 2\n");
    tabla(2);
    printf("\nTABLA DEL 3\n");
    tabla(3);
    printf("\nTABLA DEL 4\n");
    tabla(4);
    printf("\nTABLA DEL 5\n");
    tabla(5);
    return 0;
}
