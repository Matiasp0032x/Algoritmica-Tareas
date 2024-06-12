//Ordenar alfabeticamente una lista de palabras
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Este es muy parecido al ejercicio 1

#define MAX_PALABRAS 1000 //Cantidad maxima de palabras
#define MAX_LONGITUD_PALABRA 50 //Cantidad maxima para cada palabra

//Un struct para almacenar las palabras
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

    //Convertimos el texto en minúsculas
    for (int i = 0; texto[i] != '\0'; i++)
        texto[i] = tolower(texto[i]);

    //Dividimos el texto en palabras
    char *palabra = strtok(texto, " ,.;!?"); //Los posibles caracteres q separan palabras
    while (palabra != NULL) {
        //Agregamos la palabra al diccionario 
        strcpy(diccionario[numPalabras].palabra, palabra);
        numPalabras++;
        palabra = strtok(NULL, " ,.;!?");
    }

    //Ordenamos la lista de palabras con qsort
    qsort(diccionario, numPalabras, sizeof(tPalabra), compararPalabras);

    //Imprimimos la lista de palabras ordenada
    printf("\nLista de palabras:\n");
    for (int i = 0; i < numPalabras; i++)
        printf("%d-) %s\n", i+1, diccionario[i].palabra);

    return 0;
}