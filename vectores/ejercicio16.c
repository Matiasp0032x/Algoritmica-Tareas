#include <stdio.h>
/*Leer un vector B de N componentes y un número entero A y encontrar 
el menor elemento del vector que sea mayor que el A leído*/
int main()
{
    //Inicializamos variables y pedimos un numero y el rango del vector B
    int N, A, menor;
    printf("Introduzca un numero entero A: ");
    scanf("%d", &A);
    printf("Introduzca el rango del vector: ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &N);
    }

    //Inicializamos vector B y empezamos a cargar los componentes
    int B[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &B[i]);
    }

    // Inicializamos menor en -1 para indicar que no se ha encontrado ningún elemento mayor que A
    menor = -1; 
    for (int i = 0; i < N; i++) {
        if (B[i] > A && (menor == -1 || B[i] < menor)) {
            menor = B[i];
        }
    }
    printf("El menor elemento del vector que sea mayor que el A leido es: %d", menor);
    return 0;
}