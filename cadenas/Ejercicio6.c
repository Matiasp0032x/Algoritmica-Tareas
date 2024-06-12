/*Obtener el diminutivo de un nombre dado. Ejemplo: Pedro -> Pedrito*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Funcion para obtener el diminutivo de un nombre y colocarlo, funciona ma o menos
void obtenerDiminutivo(char nombre[]) {
    int len = strlen(nombre);
    char diminutivo[100] = "";

    //Convertimos el primer caracter a mayuscula para mantener el formato de Nombre
    nombre[0] = toupper(nombre[0]);

    //Obtenemos el ultimo caracter del nombre
    char ultimaLetra = nombre[len - 1];

    if (ultimaLetra == 'a' || ultimaLetra == 'e' || ultimaLetra == 'i' || ultimaLetra == 'o' || ultimaLetra == 'u') 
    {
        //Si el nombre termina en vocal, se agrega "ito" o "ita"
        if (ultimaLetra == 'a') 
            snprintf(diminutivo, sizeof(diminutivo), "%s%s", nombre, "ita");
        else 
            snprintf(diminutivo, sizeof(diminutivo), "%s%s", nombre, "ito");
    } 
    else if (ultimaLetra == 'r' || ultimaLetra == 'n') {
        //Si el nombre termina en "r" o "n", se agrega "cito" o "cita"
        if (nombre[len - 2] == 'a')
            snprintf(diminutivo, sizeof(diminutivo), "%.*s%s", len - 1, nombre, "cita");
        else
            snprintf(diminutivo, sizeof(diminutivo), "%.*s%s", len - 1, nombre, "cito");
        } 
    else 
        //Para otros casos, se agrega "ito" por defecto, segun lei
        snprintf(diminutivo, sizeof(diminutivo), "%s%s", nombre, "ito");

    printf("El diminutivo de %s es %s\n", nombre, diminutivo);
}

int main() {
    //Inicializamos y pedimos un nombre
    char nombre[100];
    printf("Ingrese un nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    //Eliminamos el salto de línea al final de la entrada, ahora pille que existe strcspn
    nombre[strcspn(nombre, "\n")] = '\0';

    //Llamamos a la funcion
    obtenerDiminutivo(nombre);

    return 0;
}