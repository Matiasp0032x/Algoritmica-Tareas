/*Dado un texto, codificar su contenido cambiando cada letra por la que le sigue en el alfabeto. 
La letra "z" se reemplaza por "a"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //Inicializamos texto
    char texto[1000];

    //Ingresamos un texto
    printf("Ingrese un texto: ");
    fgets(texto, sizeof(texto), stdin);

    //Inicializamos y agarramos el tamaño de la cadena texto, para verificar si existe un salto de linea
    int len=strlen(texto);
    if (len > 0 && texto[len - 1] == '\n')
        texto[len - 1] = '\0';

    //Convertimos a minusculas el texto
    for (int i = 0; texto[i] != '\0'; i++)
        texto[i] = tolower(texto[i]);

    //Codificamos el texto
    for (int i = 0; texto[i] != '\0'; i++) 
    {
        char letra = texto[i];
        if (letra >= 'a' && letra <= 'z') 
        {
            letra++;
            if (letra > 'z') 
                letra = 'a';
        }
        texto[i] = letra;
    }

    //Imprimimos el texto codificado
    printf("Texto nuevo jeje: %s\n", texto);
    return 0;
}
