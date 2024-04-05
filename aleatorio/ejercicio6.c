#include<stdio.h>
#include<time.h>
#include <stdlib.h>
/*En realidad, las reglas del juego "Generala" permiten que el jugador realice hasta un máximo 
de tres lanzamientos de los dados para buscar alguna de las combinaciones ganadoras. En la primera 
oportunidad el jugador debe lanzar los cinco dados. Para la segunda oportunidad, el jugador puede 
conservar algunos de los dados lanzados y lanzar solo los restantes. En la tercera oportunidad, 
si aún no ha obtenido una combinación ganadora, puede proceder como en la segunda oportunidad. 
Escribir un algoritmo que permita realizar hasta tres lanzamientos siguiendo las reglas de 
este juego y que detecte cuando aparece una combinación ganadora, imprimiendo nombre.*/

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
    for (int i = 0; i < 5; i++) 
        contador[dados[i] - 1]++;    
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

// Función para realizar un lanzamiento de los dados
void lanzarDados(int dados[]) {
    for (int i = 0; i < 5; i++) 
        dados[i] = 1 + rand() % 6; // Lanzamiento de los dados
}

int main()
{
     //Inicializamos las variables y damos la bienvenida
    srand(time(NULL));
    int dados[5]={0}, intento=0, cons, dadosCons[5] = {0};;

    printf("\t\t\t\t\t---------------------\n");
    printf("\t\t\t\t\tBIENVENIDO A GENERALA\n");
    printf("\t\t\t\t\t---------------------\n");

    //Primer Lanzamiento
    lanzarDados(dados);

    //Mostrando dados
    for (int i = 0; i < 5; i++)
            printf("Dado %d: %d\n", i + 1, dados[i]);

    // Verificamos si hay combinaciones ganadoras
    if (generala(dados)) 
    {
        printf("¡Generala!\n");
        return 0;
    } 
    else if (poker(dados)) 
    {
        printf("¡Poker!\n");
        return 0;
    } 
    else if (foul(dados)) 
    {
        printf("¡Foul!\n");
        return 0;
    }
    else if ((dados[0]<dados[1] && dados[1]<dados[2] && dados[2]<dados[3] && dados[3]<dados[4]) 
    || (dados[0]>dados[1] && dados[1]>dados[2] && dados[2]>dados[3] && dados[3]>dados[4])) 
    {
        printf("¡Escalera!\n");
        return 0;
    }

    // Segundo y tercer lanzamiento
    while (intento < 2)
    {
        //Preguntamos si desea conservar algun dado y si es asi cual
        printf("Desea conservar algun dado del lanzamiento anterior? (0: No, 1: Si): ");
        scanf("%d", &cons);
        if (cons) {
            printf("Indique los numeros de los dados que desea conservar: ");
            for (int i = 0; i < 5; i++) {
                scanf("%d", &dadosCons[i]); //si quiero conservar el dado 4 y 4 seria indicar tipo 0 0 3 4 0 
            }
            // Relanzar los dados restantes
            for (int i = 0; i < 5; i++) {
                if (!dadosCons[i]) 
                    dados[i] = 1 + rand() % 6;
            }
        }
        else
            lanzarDados(dados); // Lanzar todos los dados nuevamente
        //Mostrando dados
        for (int i = 0; i < 5; i++)
            printf("Dado %d: %d\n", i + 1, dados[i]);
        // Verificar combinaciones ganadoras
        if (generala(dados)) 
        {
            printf("¡Generala!\n");
            return 0;
        } 
        else if (poker(dados)) 
        {
            printf("¡Poker!\n");
            return 0;
        } 
        else if (foul(dados)) 
        {
            printf("¡Foul!\n");
            return 0;
        }
        else if ((dados[0]<dados[1] && dados[1]<dados[2] && dados[2]<dados[3] && dados[3]<dados[4]) 
        || (dados[0]>dados[1] && dados[1]>dados[2] && dados[2]>dados[3] && dados[3]>dados[4])) 
        {
            printf("¡Escalera!\n");
            return 0;
        }
        intento++;//Sumamos los intentos 
    }
    //Si se termino los intentos pues lastima que no gano
    printf("No se ha obtenido ninguna combinacion ganadora en los tres lanzamientos CHAU.\n");
    return 0;
} 