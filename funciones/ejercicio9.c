/*Generar las siguientes series de valores. Escribir procedimientos para cada una:
Serie A             Serie B                 Serie C                Serie D                   Serie E
1                   1                       1234                   1                         1234
12                  22                      2345                   121                       2341
123                 333                     3456                   12321                     3412
1234                4444                    4567                   1234321                   4123
.....               .....                   ....                   123454321
123456789           88888888                13141516               12...N...21*/

#include <stdio.h>

//Funcion para crear la serie A
void serieA(){
    //Inicializamos el vector y lo cargamos
    int vec[9];
    for (int i = 0; i < 9; i++)
        vec[i]=i+1;

    //Imprimimos en forma de un triangulo rectangulo
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i+1; j++)
            printf("%d ", vec[j]);
        printf("\n");
    }
}

//Funcion para crear la serie B
void serieB(){
    //Inicializamos el vector y lo cargamos
    int vec[8];
    for (int i = 0; i < 8; i++)
        vec[i]=i+1;

    //Imprimimos en forma de un triangulo rectangulo 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ", vec[j]);
            //Cada vez que pasa vec[j] le ponemos el valor de vec[i+1] que es el sgte valor del vector
            vec[j]=vec[i+1];
        }
        printf("\n");
    }
}

//Funcion para crear la serie C
void serieC(){
    //Inicializamos el vector y lo cargamos
    int vec[4];
    for (int i = 0; i < 4; i++)
        vec[i]=i+1;

    //Imprimimos y recorremos 13 veces
    //Ya que 13 es el ultimo primer numero de la secuencia ( me refiero a esto -> 13-14-15-16)
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", vec[j]);
            //Ahora vec[j] va a valer 1 más
            vec[j]=vec[j]+1;
        }
        printf("\n");
    }
}

//Funcion para crear la serie D
void serieD(){
    //Inicializamos las variables que vamos a usar
    int n;
    printf("\nIngrese un numero: ");
    scanf("%d",&n);

    //Recorremos un contador que va desde 1 hasta N y lo vamos imprimiendo
    for (int i = 0; i < n; i++)
        printf("%d ", i+1);
    //Recorremos un contador que va desde N hasta 1 y lo vamos imprimiendo
    for (int i = n; i > 1; i--)
        printf("%d ", i-1);
}

//Funcion para crear la serie E
void serieE(){
    //Inicializamos una variable y un vector y lo cargamos
    int vector[4], aux;
    for (int i = 0; i < 4; i++)
        vector[i]=i+1;

    //Recorremos 4 veces (tamaño del vector) y vamos imprimiendo y girando despues a la izquierda
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", vector[j]);

        //Vamos girando a la izquierda los valores del vector y usamos un aux para almacenar el primer valor
        aux = vector[0];
        for (int j = 0; j < 3; j++) 
            vector[j] = vector[j + 1];
        //Luego usamos el aux para poner en la ultima posicion
        vector[3] = aux;
        printf("\n");
    }
    
}

int main()
{
    printf("\n------------------------\n");
    printf("\tSERIE A");
    printf("\n------------------------\n");
    serieA();

    printf("\n------------------------\n");
    printf("\tSERIE B");
    printf("\n------------------------\n");
    serieB();

    printf("\n------------------------\n");
    printf("\tSERIE C");
    printf("\n------------------------\n");
    serieC();

    printf("\n------------------------\n");
    printf("\tSERIE D");
    printf("\n------------------------\n");
    serieD();

    printf("\n------------------------\n");
    printf("\tSERIE E");
    printf("\n------------------------\n");
    serieE();

    return 0;
}