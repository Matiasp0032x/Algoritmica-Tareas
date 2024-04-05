#include <stdio.h>
/*Escribe un programa que pida el limite inferior y superior de un intervalo. 
Si el límite inferior es mayor que el superior lo tiene que volver a pedir. 
A continuación se van introduciendo números hasta que introduzcamos el 0. 
Cuando termine el programa dará las siguientes informaciones:

La suma de los números que están dentro del intervalo (intervalo abierto).
Cuantos números están fuera del intervalo.
He informa si hemos introducido algún número igual a los límites del intervalo.*/

int main()
{
    int lim1, lim2, n, sum, cantf, igual;
    sum=cantf=igual=0;

    printf("Introduzca el limite inferior y superior de un intervalo: ");
    scanf("%d %d", &lim1, &lim2);
    while (lim1>lim2)
    {
        printf("\nERROR DE LIMITACIONES INTENTE DE NUEVO\n");
        printf("Introduzca el limite inferior y superior de un intervalo: ");
        scanf("%d %d", &lim1, &lim2);
    }

    do {
        printf("Ingrese un numero (0 para terminar): ");
        scanf("%d", &n);
        if (n != 0) 
        {
            if (n > lim1 && n < lim2) 
                sum += n;
            else
                cantf++;
        }
        if (n == lim1 || n == lim2) 
            igual = 1;
    } while (n != 0);

    printf("\nSuma de los numeros dentro del intervalo: %d\n", sum);
    printf("Cantidad de numeros fuera del intervalo: %d\n", cantf);
    if (igual==1) 
        printf("Se ha introducido algun numero igual a los limites del intervalo.\n");
    else 
        printf("No se ha introducido ningun numero igual a los limites del intervalo.\n");
    return 0;
}
