//Verificar si un numero es capicua

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //Inicializacion de variable
    char cap[1000];
    int num;

    //Pedimos el texto
    printf("Ingrese un numero: ");
    fgets(cap, sizeof(cap), stdin);

    //Eliminamos el salto de línea al final del texto si existe
    int len = strlen(cap);
    if (len > 0 && cap[len - 1] == '\n')
        cap[len - 1] = '\0';

    //Asignamos una variable num para el numero escrito y creamos las variables invertido y una copia del numero
    num=atoi(cap); 
    int invertido = 0, copiaNumero = num;

    //Vamos poniendo numero en numero a la variable invertida los numeros de num
    while (copiaNumero > 0) {
        int digito = copiaNumero % 10;
        invertido = invertido * 10 + digito;
        copiaNumero /= 10;
    } 

    //Verificamos si es un numero capicua si al invertir la variable num (osea invertido), sigue siendo igual
    if (num == invertido) 
    printf("%d es un numero capicua\n", num);
    else 
    printf("%d no es un numero capicua\n", num);
    return 0;
}
