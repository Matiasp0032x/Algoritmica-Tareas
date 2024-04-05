#include <stdio.h>
/*Leer un vector de 30 componentes. Sumar sus componentes, hallar el promedio e imprimir el resultado.*/
int main()
{
    //Inicializamos las variables
    int vec[30], sum=0;
    float prom;

    //Cargamos el vector y sumamos sus componentes
    for (int i = 0; i < 30; i++)
    {
        printf("Introduzca un valor: ");
        scanf("%d", &vec[i]);
        sum+=vec[i];
    }

    //Calculamos el promedio e imprimimos
    prom=(float)sum/30;
    printf("El resultado es: %.2f", prom);
    return 0;
}
