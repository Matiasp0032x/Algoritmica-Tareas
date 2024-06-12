/*Desarrollar un algoritmo para jugar AHORCADO. En este juego, uno de los jugadores escribe
una palabra secreta que debe ser descubierta por el segundo jugador. Como pista inicial se
presenta una palabra reemplazado cada letra por un asterisco. El jugador propone una letra a la
vez y si esta letra existe en la palabra, se vuelve a mostrar la palabra, pero colocando la letra en
todas las posiciones en que ella aparece. Se cuenta con una cantidad máxima de intentos
posibles para descubrir la palabra completa.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_INTENTOS 10 //Cantidad maxima de oportunidades, tal vez deberia de ser menor

int main() {
    //Inicializacion de variables
    char palabra[100], palabra_a_mostrar[100];
    int intentos = 0, len, aciertos = 0;
    char letras_adivinadas[27] = ""; // Para almacenar las letras adivinadas
    
    //Pedimos al Jugador 1 que ingrese una palabra para comenzar el juego
    printf("Jugador 1: Ingrese una palabra: ");
    fgets(palabra, sizeof(palabra), stdin);

    //Eliminamos el salto de línea
    palabra[strcspn(palabra, "\n")] = '\0'; 

    //Convertimos a minuscula el texto
    for (int i = 0; palabra[i] != '\0'; i++)
        palabra[i] = tolower(palabra[i]);

    len = strlen(palabra);

    //Cargamos la palabra a mostrar con asteriscos
    for (int i = 0; i < len; i++)
        palabra_a_mostrar[i] = '*';
    palabra_a_mostrar[len] = '\0';
    
    //Limpiamos la pantalla
    printf("\033[H\033[J");

    //Turno del player 2, el q debe de adivinar
    printf("Jugador 2: Intenta adivinar la palabra secreta\n");
    
    //Hacemos un while para el juego
    while (intentos < MAX_INTENTOS && aciertos < len) {
        char letra;
        int letra_encontrada = 0;

        //Mostramos el estado actual de la palabra
        printf("Palabra: %s\n", palabra_a_mostrar);
        printf("Intentos restantes: %d\n", MAX_INTENTOS - intentos);
        printf("Letras adivinadas: %s\n", letras_adivinadas);
        printf("Ingresa una letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra); // Convertir a minúscula para simplificar la comparación

        //Verificamos si la letra ya ha sido adivinada, demasiado bobo debe de ser si pasa esto
        if (strchr(letras_adivinadas, letra)) {
            printf("Ya adivinaste esa letra. Intenta con otra y que no sea lo q ya dijiste.\n");
            printf("\033[H\033[J"); //We clean the pantalla
            continue;
        }

        //Agregamos la letra a la lista de letras adivinadas
        strncat(letras_adivinadas, &letra, 1);

        //Verificamos si la letra está en la palabra secreta
        for (int i = 0; i < len; i++) {
            if (palabra[i] == letra) {
                palabra_a_mostrar[i] = letra;
                letra_encontrada = 1;
                aciertos++;
            }
        }

        //Incrementamos el numero de intentos, si no adivino la letra
        if (!letra_encontrada) 
            intentos++;

        printf("\033[H\033[J"); //We clean the pantalla
    }


    //Mostramos el resultado del juego
    if (aciertos == len) {
        printf("¡Felicidades! Adivinaste la palabra: %s\n", palabra);
    } else {
        printf("¡Has perdido! La palabra era: %s\n", palabra);
    }

    return 0;
}
