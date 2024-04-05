#include <stdio.h>
/*Hacer un algoritmo para crear un vector V, con todas las edades de los alumnos del quinto curso 
de informática, y luego calcular el promedio de las edades.*/
int main()
{
    //Inicializamos las variables y pedimos la cantidad de alumnos
    int cant_alum,sum;
    float prom;
    sum=0;
    printf("Introduzca la cantidad de alumnos del quinto curso: ");
    scanf("%d", &cant_alum);

    //Validamos la cantidad de alumnos
    while (cant_alum<1)
    {
        printf("ERROR DE INTRODUCCION DE CANTIDAD\n...\n...\n...\n");
        printf("Introduzca la cantidad de alumnos del quinto curso: ");
        scanf("%d", &cant_alum);
    }

    //Declaramos el vector y empezamos a cargar las edades
    int edad_5to[cant_alum];
    for (int i = 0; i < cant_alum; i++)
    {
        printf("Ingrese la edad del alumno %d: ", i+1);
        scanf("%d", &edad_5to[i]);
        
        //Validamos la edad y la sumamos despues
        while (edad_5to[i]<0)
        {
            printf("ERROR DE INTRODUCCION DE EDAD\n...\n...\n...\n");
            printf("Ingrese la edad del alumno %d: ", i+1);
            scanf("%d", &edad_5to[i]);
        }
        sum+=edad_5to[i];
    }

    //Calculamos el promedio de las edades e imprimimos
    prom=(float) sum/cant_alum;
    printf("El promedio de los alumnos es: %.2f", prom);
    return 0;
}
