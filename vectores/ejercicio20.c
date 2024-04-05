#include <stdio.h>
/*Realizar un pseudocódigo que permita al Director del Consejo Supremo Electoral 
encontrar el número y porcentaje de votos obtenidos por cada uno de los 4 candidatos 
de la contienda electoral en relación a los votantes que asistieron a las urnas a 
depositar su voto. Lea en un arreglo la intención de voto de cada una de las personas.*/

//Definimos una constante para la cantidad de candidatos
#define NUM_CANDIDATOS 4

int main()
{
    //Inicializamos las variables, el vector y pedimos la cantidad de votantes 
    int cant, votos[NUM_CANDIDATOS]={0}, voto;
    float porcentaje;
    printf("Introduzca la cantidad de personas que fueron a votar: ");
    scanf("%d", &cant);

    //Validamos la cantidad de votantes
    while (cant<1)
    {
        printf("ERROR DE INTRODUCCION\n");
        printf("Introduzca la cantidad de personas que fueron a votar: ");
        scanf("%d", &cant);
    }

    //Cargamos el voto de cada votante en el vector
    for (int i = 0; i < cant; i++)
    {
        printf("El votante %d, su voto es para el candidato: ", i + 1);
        scanf("%d", &voto);

        if (voto >= 1 && voto <= NUM_CANDIDATOS)
            votos[voto - 1]++; // Incrementamos el contador de votos para el candidato elegido
        else 
        {
            printf("ERROR\nVoto invalido, ingrese un numero entre 1 y 4.\n");
            i--; // Decrementamos el contador para permitir que el votante vuelva a ingresar su voto, por tontis
        }
    }

    printf("\nResultados de la eleccion:\n");
    // Calculamos y mostramos el numero y porcentaje de votos para cada candidato
    for (int i = 0; i < NUM_CANDIDATOS; i++) {
        porcentaje = (float) votos[i] / cant * 100;
        printf("Candidato %d\n", i + 1);
        printf("Cantidad de votos: %d\n", votos[i]);
        printf("Porcentaje de votos: %.2f%%\n", porcentaje);
        printf("\n");
    }
    return 0;
}


//NUNCA MAS ESTE EJERCICIO, 3hs por no inicializar los componentes con 0, pero ya aprendi la leccion, proba y el candidato 3 es el q causa problemas