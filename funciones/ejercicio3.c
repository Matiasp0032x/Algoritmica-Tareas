/*Se cuenta con una lista de m números que, con certeza, forman parte de una progresión geométrica, 
aunque no se trata necesariamente de términos sucesivos. Escribir un algoritmo para imprimir la 
progresión completa entre el menor y el mayor valor de la lista. Utilizar un subprograma para el proceso.
Ejemplo de progresión geométrica: 1,2,4,8,16 razón 2. La razón geométrica es la comparación de dos 
cantidades por su cociente, donde se ve cuántas veces contiene una a la otra.... Una razón «X:Y» se 
puede leer como «X sobre Y», o bien «X es a Y». El numerador de la razón (es decir, el X) se llama 
antecedente y al denominador (el Y) se le conoce como consecuente.*/

#include <stdio.h>
#include <math.h>

//Creamos una funcion para la progresion geometrica
void progresion(int vec[], int x, int y){
    for (int i = 0; i < y; i++)
    {
        vec[i]=pow(x,i);
        printf("%d ",vec[i]);
    }
}

//Funcion para hallar el menor y mayor numero en una progresion
void menor_mayor(int vec[], int x){
    int menor, mayor;
    menor=mayor=vec[0];
    for (int i = 0; i < x; i++)
    {
        if (vec[i]<menor)
            menor=vec[i];
        if (vec[i]>mayor)
            mayor=vec[i];
    }
    printf("\nEl menor numero es: %d",menor);
    printf("\nEl mayor numero es: %d",mayor);
}

int main()
{
    //Inicializamos algunas variables y validamos el rango del vector
    int m,r;
    printf("Ingrese el rango del vector: ");
    scanf("%d",&m);
    while (m<1)
    {
        printf("\nERROR\nIngrese el rango del vector de nuevo: ");
        scanf("%d",&m);
    }
    m++;//Para llegar de r^0 hasta r^m

    //Inicializamos la lista y pedimos una razon para la progresion
    int lista[m];
    printf("Introduzca una razon para la progresion geometrica: ");
    scanf("%d", &r);

    //Le pasamos el vector a las funciones para calcular los resultados
    progresion(lista,r,m);
    menor_mayor(lista, m);
    return 0;
}
