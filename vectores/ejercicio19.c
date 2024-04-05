#include <stdio.h>
/*Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el mismo 
vector por pantalla, pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa 
debería imprimir 10 9 8 7 6 5 4 3 2 1*/
int main()
{
    //Inicializamos variables
    int vec[10], aux;

    //Cargamos el vector y lo mostramos
    for (int i = 0; i < 10; i++)
        vec[i]=i+1;
    for (int i = 0; i < 10; i++)
        printf("%d ", vec[i]);
    printf("\n");

    //Invertimos el vector
    for (int i = 0; i < 5; i++)
    {
        aux=vec[i];
        vec[i]=vec[9-i];
        vec[9-i]=aux;
    }

    //Mostramos el vector invertido
    for (int i = 0; i < 10; i++)
        printf("%d ", vec[i]);
    return 0;
}
