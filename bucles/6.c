#include <stdio.h>
/*Escribir un programa que imprima todos los números 
pares entre dos números que se le pidan al usuario*/
int main()
{
    int n1,n2,aux;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &n1,&n2);
    if (n1>n2)
    {
        aux=n1;
        n1=n2;
        n2=aux;
    }
    for (int i = n1; i <= n2; i++)
    {
        if (i%2==0)
            printf("%d ",i);
    }
    return 0;
}
