#include <stdio.h>
#include<time.h>
#include <stdlib.h>
/*Simular 1000 lanzamientos de una moneda y registrar 
en cuantos lanzamientos se obtiene "cara" y en cuantos "cruz*/
int main()
{
    int cruz=0, cara=0, X;
    srand(time(NULL));
    for (int i = 0; i < 1000; i++)
    {
        X = 1 + rand()%2;
        if (X==1)
            cruz++;
        if (X==2)
            cara++;
    }
    printf("La cantidad de veces que salio cruz es: %d\n", cruz);
    printf("La cantidad de veces que salio cara es: %d\n", cara);
    return 0;
}
