#include<stdio.h>
#include<time.h>
#include <stdlib.h>
/*En el juego conocido como "Generala" se utilizan cinco dados que se 
lanzan simultáneamente. De acuerdo a los valores obtenidos en esos 
dados se tienen las combinaciones ganadoras que se muestran a continuación. 
Escribir un algoritmo para preparar la tabla de frecuencias de estas combinaciones, a partir de N 
lanzamientos de los cinco dados. 
Generala: cuando los cinco dados tienen igual valor.
Poker: cuando cuatro dados tienen igual valor y el quinto es diferente. 
Foul: cuando tres dados tienen el mismo valor y los otros dos son iguales a otro valor. 
Ejemplos: 3,1,3,3,1 ο 6,4,4,3,4 
Escalera: cuando los valores de los cinco dados forman una secuencia ascendente. 
Ejemplos: 1,3,2,5,4 ο 5,4,2,6,3.*/

// Función para verificar si se obtuvo una Generala
int generala(int dados[]) {
    for (int i = 1; i < 5; i++) {
        if (dados[i] != dados[0])//Revisamos si los numeros son iguales
            return 0; // No es Generala 
    }
    return 1; // Es Generala
}

// Función para verificar si se obtuvo un Poker
int poker(int dados[]) {
    int contador[6] = {0}; // Contador para cada valor del dado
    for (int i = 0; i < 5; i++) 
        contador[dados[i] - 1]++;
    for (int i = 0; i < 6; i++) {
        if (contador[i] == 4) //Revisa si 4 dados dieron el mismo resultado
            return 1; // Es Poker
    }
    return 0; // No es Poker 
}

// Función para verificar si se obtuvo un Foul
int foul(int dados[]) {
    int contador[6] = {0}; // Contador para cada valor del dado
    for (int i = 0; i < 5; i++) {
        contador[dados[i] - 1]++;
    }
    for (int i = 0; i < 6; i++) {
        if (contador[i] == 3) { // Si hay tres dados con el mismo valor
            for (int j = 0; j < 6; j++) {
                if (contador[j] == 2 && j != i)// Si hay dos dados con otro valor
                    return 1; // Es Foul
            }
        }
    }
    return 0; // No es Foul
}

int main()
{
    //Inicializamos las variables y damos la bienvenida
    srand(time(NULL));
    int dados[5]={0}, N, frecuencia[4]={0};
    printf("\t\t\t\t\t---------------------\n");
    printf("\t\t\t\t\tBIENVENIDO A GENERALA\n");
    printf("\t\t\t\t\t---------------------\n");
    printf("Ingrese la cantidad de lanzamientos: ");
    scanf("%d", &N);

    //Cargamos los 5 posibles valores a los dados
    for (int i = 0; i < N; i++)
    {
        dados[0] = 1 + rand() % 6; 
        dados[1] = 1 + rand() % 6;
        dados[2] = 1 + rand() % 6;
        dados[3] = 1 + rand() % 6;
        dados[4] = 1 + rand() % 6;

        //Verificamos las posibles combinaciones de ganar este maldito juego y aumentamos la frecuencia correspondiente
        if (generala(dados))
            frecuencia[0]++;
        else if (poker(dados))
            frecuencia[1]++;
        else if (foul(dados))
            frecuencia[2]++;
        else if ((dados[0]<dados[1] && dados[1]<dados[2] && dados[2]<dados[3] && dados[3]<dados[4]) 
        || (dados[0]>dados[1] && dados[1]>dados[2] && dados[2]>dados[3] && dados[3]>dados[4]))
            frecuencia[3]++;
    }

    //Imprimimos los resultados
    printf("Combinacion\tFrecuencia\n");
    printf("Generala\t%d\n", frecuencia[0]);
    printf("Poker\t\t%d\n", frecuencia[1]);
    printf("Foul\t\t%d\n", frecuencia[2]);
    printf("Escalera\t%d\n", frecuencia[3]);
    return 0;
}   