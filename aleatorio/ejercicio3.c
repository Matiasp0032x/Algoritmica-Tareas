#include<stdio.h>
#include<time.h>
#include <stdlib.h>
/*Si se lanzan tres monedas al mismo tiempo, estimar la probabilidad de que las tres resulten "caras" o "cruces"*/
int main()
{
    srand(time(NULL));
    int X, Y, Z, cruz, cara;
    float prom1,prom2;
    cruz=cara=0;
    for (int i = 0; i < 100; i++)
    {
        X=rand()%2;
        Y=rand()%2;
        Z=rand()%2;
        if (X==0 && Y==0 && Z==0)
            cruz++;
        if (X==1 && Y==1 && Z==1)
            cara++;
    }
    prom1= cara/100.0 * 100.0; //Aca probe con 100 pq si pero lit estoy haciendo por 1, re xd
    prom2= cruz/100.0 * 100.0;
    printf("Las probabilidades de que se repitan cara o cruz 3 veces con 100 lanzamientos son: \n");
    printf("cara: %.2f%%\n", prom1);
    printf("cruz: %.2f%%\n", prom2);
    return 0;
} 