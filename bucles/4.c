#include <stdio.h>
/*Realizar un algoritmo que pida números (se pedirá por teclado la 
cantidad de números a introducir). El programa debe informar de 
cuantos números introducidos son mayores que 0, menores que 0 e iguales a 0*/
int main()
{
    int n, cant, mayor, menor, igual;
    mayor=menor=igual=0;
    printf("Ingrese el numero de numeros a verificar: ");
    scanf("%d",&cant);
    for (int i = 0; i < cant; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&n);
        if (n>0)
        {
            mayor++;
        }
        else if (n<0)
        {
            menor++;
        }
        else
        {
            igual++;
        }
    }
    printf("La cantidad de numeros mayores a 0 es: %d\n", mayor);
    printf("La cantidad de numeros menores a 0 es: %d\n", menor);
    printf("La cantidad de ceros es: %d", igual);
    return 0;
}
