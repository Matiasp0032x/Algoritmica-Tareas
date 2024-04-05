#include<stdio.h>
#include<time.h>
#include <stdlib.h>
/*Simular N lanzamientos de una moneda y calcular la probabilidad de aparición de una "cara" 
y de una "cruz" (la probabilidad de una "cara" se calcula dividiendo el número de 
caras obtenidas entre el número de lanzamientos "N"). Probar el algoritmo con los 
siguientes valores de N: 10, 100, 1.000, 10.000, 100.000 у verificar si a medida 
que aumenta N, la probabilidad se acerca a un valor fijo.*/

void probabilidad(int N, int *cruz, int *cara)
{
    srand(time(NULL));
    int X;
    float prom1,prom2;
    printf("%d LANZAMIENTOS\n", N);
    for (int i = 0; i < N; i++)
    {
        X=rand()%2;
        if (X==0)
            (*cruz)++;
        else 
            (*cara)++;
    }
    prom1=(float) *cara/N * 100.0;
    prom2=(float) *cruz/N * 100.0;
    printf("Las probabilidades con %d lanzamientos son: \n",N);
    printf("cara: %.2f%%\n", prom1);
    printf("cruz: %.2f%%\n", prom2);
}


int main()
{
    int cara, cruz;

//Probando con 10 lanzamientos
    cara=cruz=0;
    probabilidad(10, &cruz, &cara);

//Probando con 100 lanzamientos
    cara=cruz=0;
    probabilidad(100, &cruz, &cara);

//Probando con 1.000 lanzamientos
    cara=cruz=0;
    probabilidad(1000, &cruz, &cara);

//Probando con 10.000 lanzamientos
    cara=cruz=0;
    probabilidad(10000, &cruz, &cara);

//Probando con 100.000 lanzamientos
    cara=cruz=0;
    probabilidad(100000, &cruz, &cara);
    return 0;
} 