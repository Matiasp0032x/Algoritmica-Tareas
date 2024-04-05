#include <stdio.h>
#include <math.h>
/*Escribe un programa que diga si un número introducido por teclado es o no primo. 
Un número primo es aquel que sólo es divisible entre él mismo y la unidad. 
Nota: Es suficiente probar hasta la raíz cuadrada del número para ver si 
es divisible por algún otro número.*/
int main() {
    int n, pri = 1;

    printf("Ingrese un numero a verificar: ");
    scanf("%d", &n);

    while (n < 0) 
    {
        printf("\nERROR DE INTRODUCCION. INTENTE DE NUEVO\n");
        printf("Ingrese un numero a verificar: ");
        scanf("%d", &n);
    }

    if (n <= 1) 
    {
        pri = 0;
    } 
    else 
    {
        for (int i = 2; i <= sqrt(n); i++) 
        {
            if (n % i == 0) 
            {
                pri = 0;
                break;
            }
        }
    }

    if (pri == 0) 
    {
        printf("%d no es un numero primo.\n", n);
    } 
    else 
    {
        printf("%d es un numero primo.\n", n);
    }

    return 0;
}