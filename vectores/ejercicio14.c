#include <stdio.h>
/*Sabiendo que se tiene en memoria un vector de tamaño N (N es par), hacer un
algoritmo que permita intercambiar todos los elementos de la primera mitad, con 
los elementos de la segunda mitad.*/
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int N, aux;
    printf("Introduzca el rango del vector (debe de ser par): ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1 || N%2==1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector (debe de ser par): ");
        scanf("%d", &N);
    }

    //Inicializamos un vector y empezamos a cargar los componentes
    int vec[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &vec[i]);
    }

    for (int i = 0; i < N/2; i++)
    {
        aux=vec[i];
        vec[i]=vec[N/2+i];
        vec[N/2+i]=aux;
    }
    
    for (int i = 0; i < N; i++)
    {
        printf(" %d ", vec[i]);
    }
    
    return 0;
}
