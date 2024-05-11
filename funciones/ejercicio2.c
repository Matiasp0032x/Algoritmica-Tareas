/*Hacer un subprograma que reciba un vector de N elementos y dos números. La subrutina debe retornar la suma 
de los elementos que se encuentran entre las dos posiciones que se reciben como parámetro. Ejemplo: 
dado (10, 20, 30, 40, 40, 40, 60, 70), pos_1 = 2 y pos_2 = 5 se debe retornar 20+30+40+40 OBS. Los 
números que se reciben como posición son siempre positivos mayores a cero.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Creamos la funcion para la sumatoria desde la posX hasta la posY del vector 
int intervalo_suma(int vec[], int pos1, int pos2){
    int suma=0;
    for (int i = pos1-1; i < pos2; i++)//Pongo "i=pos1-1" porque por ejemplo la posicion 1 tiene indice 0
        suma+=vec[i];
    return suma;
}

int main()
{
    //Declaramos variables
    int n, p1, p2;
    srand(time(NULL));

    //Establecemos un rango para el vector y lo validamos
    printf("Ingrese el rango del vector: ");
    scanf("%d",&n);
    while (n<1)
    {
        printf("\nERROR\nIngrese el rango del vector de nuevo: ");
        scanf("%d",&n);
    }

    //Inicializamos el vector, lo cargamos y lo mostramos
    int vec[n];
    for (int i = 0; i < n; i++){
        vec[i]= rand() % 2; //Ponemos numeros random para q sea más facil
        printf("%d ", vec[i]);
    }

    //Pedimos las posiciones, y validamos 
    printf("\nIngrese la primera posicion para comenzar el intervalo: ");
    scanf("%d",&p1);
    while (p1<1)
    {
        printf("\nERROR\nIngrese la primera posicion para comenzar el intervalo: ");
        scanf("%d",&p1);
    }
    printf("Ingrese la segunda posicion para terminar el intervalo: ");
    scanf("%d",&p2);
    while (p2<1)
    {
        printf("Ingrese la segunda posicion para terminar el intervalo: ");
        scanf("%d",&p2);
    }

    //Mostramos el resultado 
    printf("La suma desde la posicion %d hasta la posicion %d es: %d", p1,p2, intervalo_suma(vec, p1,p2));
    return 0;
}