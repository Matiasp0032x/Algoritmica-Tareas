/*Ingresar dos valores en las variables "Máximo" y "Mínimo" y luego ingresar un valor en la variable 
"Temperatura". Imprime un mensaje si el valor de temperatura no esta dentro de los rangos marcados 
por Máximo y Mínimo*/
#include <stdio.h>

int aceptable(int temperatura, int maximo, int minimo){
    if (temperatura<=maximo && temperatura>=minimo)
        return 1;
    else
        return 0;
}

int main()
{
    int max, min, temp;
    printf("Introduzca un limite maximo de temperatura: ");
    scanf("%d",&max);
    printf("Introduzca un limite minimo de temperatura: ");
    scanf("%d",&min);
    printf("Introduzca una temperatura: ");
    scanf("%d",&temp);
    if (aceptable(temp,max,min))
        printf("La temperatura esta dentro de los rangos marcados");
    else
        printf("La temperatura no esta dentro de los rangos marcados");
    
    return 0;
}
