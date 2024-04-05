#include <stdio.h>
#include <ctype.h> 
/*Algoritmo que pida caracteres e imprima ‘VOCAL’ si son vocales y ‘NO VOCAL’ 
en caso contrario, el programa termina cuando se introduce un espacio.*/
int main()
{
    char valor;
    do
    {
        printf("Ingresa un caracter (termina con guion): ");
        scanf(" %c", &valor);
        if (tolower(valor) == 'a' || tolower(valor) == 'e' || tolower(valor) == 'i' ||
        tolower(valor) == 'o' || tolower(valor) == 'u')
            printf("\nVOCAL\n");
        else
            printf("\nNO VOCAL\n");
    } while (valor != '-');
    return 0;
}