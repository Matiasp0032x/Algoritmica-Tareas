/*Existen números que leídos de izquierda a derecha y de derecha a izquierda tienen el mismo valor. 
Ejemplo 404, 111, 55, 323 1045401. Lea un conjunto de números e imprima aquellos números leídos que 
tengan la característica antes anotada.*/

#include <stdio.h>
#include <string.h>

//Funcion para verificar si un numero es un capicua
int capicua(int num) {
    char t[20];
    snprintf(t, sizeof(t), "%d", num);  // Convertir el número a cadena

    //Este es otra forma de saber si es capicua
    int len = strlen(t);
    for (int i = 0; i < len / 2; i++) {
        if (t[i] != t[len - 1 - i]) {
            return 0;  //Si no coincide, no es un capicua
        }
    }
    return 1;  //Si las comparaciones coinciden, es un capicua
}

int main() {
    int cantidad;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &cantidad);

    int num[cantidad];

    printf("Ingrese los numeros:\n");
    for (int i = 0; i < cantidad; i++) 
        scanf("%d", &num[i]);

    for (int i = 0; i < cantidad; i++)
    {
        if (capicua(num[i]))
            printf("%d es capicua\n", num[i]);
        else
            printf("%d es no capicua\n", num[i]);
    }
    

    return 0;
}
