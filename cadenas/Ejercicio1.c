//Dado un texto t, formar una lista "diccionario" conteniendo todas las palabras diferentes 
//que Ejercicios de aplicación existen en t, ordenadas alfabéticamente.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALABRAS 1000 //Cantidad maxima de palabras
#define MAX_LONGITUD_PALABRA 50 //Cantidad maxima para cada palabra

//Un struct para almacenar las palabras, ns si se puede usar, por fa considerame
typedef struct {
    char palabra[MAX_LONGITUD_PALABRA];
} tPalabra;

//Funcion para comparar palabras, para qsort
int compararPalabras(const void *a, const void *b) {
    tPalabra *palabra1 = (tPalabra *)a;
    tPalabra *palabra2 = (tPalabra *)b;
    return strcmp(palabra1->palabra, palabra2->palabra);
}

int main() {
    //Inicializacion de variables
    char texto[1000];
    tPalabra diccionario[MAX_PALABRAS];
    int numPalabras = 0;

    //Pedimos el texto
    printf("Ingrese un texto: ");
    fgets(texto, sizeof(texto), stdin);

    //Eliminamos el salto de línea al final del texto si existe
    int len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n')
        texto[len - 1] = '\0';

    //Convertimos el texto en minúsculas, para que sea más easy el trabajo
    for (int i = 0; texto[i] != '\0'; i++)
        texto[i] = tolower(texto[i]);

    //Dividimos el texto en palabras, aclarando que fue una mierda hacer esto
    char *palabra = strtok(texto, " ,.;!?"); //Los posibles caracteres q separan palabras
    while (palabra != NULL) {
        //Verificamos si la palabra ya está en el diccionario
        int encontrado = 0;
        for (int i = 0; i < numPalabras; i++) {
            if (strcmp(diccionario[i].palabra, palabra) == 0) {
                encontrado = 1;
                break;
            }
        }

        //Agregamos la palabra al diccionario si no se repite
        if (!encontrado) {
            strcpy(diccionario[numPalabras].palabra, palabra);
            numPalabras++;
        }

        palabra = strtok(NULL, " ,.;!?"); 
    }

    //Ordenamos la lista de palabras con qsort
    qsort(diccionario, numPalabras, sizeof(tPalabra), compararPalabras);

    //Imprimimos el diccionario creado
    printf("\nLista de palabras:\n");
    for (int i = 0; i < numPalabras; i++)
        printf("%s\n", diccionario[i].palabra);

    return 0;
}