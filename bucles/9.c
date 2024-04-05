#include <stdio.h>
/*Escribe un programa que dados dos números, uno real (base) y un entero positivo 
(exponente), saque por pantalla el resultado de la potencia. No se puede utilizar 
el operador de potencia.*/
int main()
{
    float x, y, c, n;
    printf("Ingrese un numero: ");
    scanf("%f",&x);
    printf("\nIngrese el exponente del numero: ");
    scanf("%f",&y);
    c=0;n=1;
    if (c<y)
    {
        while (c<y)
        {
            n*=x;
            c++;
        }
    }
    else
    {
        while (c>y)
        {
            n/=x;
            c--;
        }
    }
    printf("\n%.2f elevado a %.2f es igual a %f", x,y,n);
    return 0;
}