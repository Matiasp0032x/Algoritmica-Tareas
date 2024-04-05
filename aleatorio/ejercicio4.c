#include<stdio.h>
#include<time.h>
#include <stdlib.h>
/*En cierto juego se lanzan dos dados y se registra la suma de los valores que resultan en cada 
uno de ellos. Escribir un algoritmo que simule P lanzamientos y elabore una tabla de frecuencias 
para los valores posibles de la suma (una tabla de frecuencia contiene cada valor posible y la 
cantidad de veces que el mismo se ha presentado.)*/
int main()
{
    srand(time(NULL));
    int P, suma=0, frecuencia[12]={0}, dado1, dado2;
    printf("Ingrese la cantidad de lanzamientos a tirar: ");
    scanf("%d",&P);
    for (int i = 0; i < P; i++)
    {
        dado1 = 1+rand()%6;
        dado2 = 1+rand()%6;
        suma = dado1 + dado2;
        frecuencia[suma]++;
    }
    printf("Tabla de frecuencias:\n");
    printf("Suma\tFrecuencia\n");
    for (int i = 2; i <= 12; i++)
        printf("%d\t%d\n", i, frecuencia[i]);
    return 0;
} 