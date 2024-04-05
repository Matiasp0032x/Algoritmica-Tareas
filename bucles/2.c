#include<stdio.h>
#include<time.h>
#include <stdlib.h>
/*Crea una aplicación que permita adivinar un número. La aplicación genera un
número aleatorio del 1 al 100. A continuación va pidiendo números y va respondiendo
si el número a adivinar es mayor o menor que el introducido,a demás de los intentos 
que te quedan (tienes 10 intentos para acertarlo). El programa termina cuando
se acierta el número (además te dice en cuantos intentos lo has acertado), 
si se llega al limite de intentos te muestra el número que había generado.*/

int main()
{
    int intentos=5, valor;
    srand(time(NULL));
    int numero = rand() % 100 + 1;
    do
    {
        printf("Adivina el numero que pense entre 1 y 100: ");
        scanf("%d",&valor);
        if (valor==numero)
        {
            printf("Ganaste en %d intentos", 6-intentos);
            break;
        }
        else if (valor<numero)
            printf("El numero que pense es mayor\n");
        else
            printf("El numero que pense es menor\n");
        intentos--;
    } while (intentos!=0);
    if (intentos==0)
        printf("Perdio, solo tenia 5 intentos, el numero era: %d", numero);
    return 0;
}