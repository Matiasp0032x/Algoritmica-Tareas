/*Escribir la función factorial de un número
3!=1*2*3
5!=1*2*3*4*5
*/
#include <stdio.h>

//Función para hacer el factorial
int factorial(int num) {
    int result=1;
    for (int i = 1; i <= num; i++)
        result*=i;
    return result;
}

int main()
{
    //Inicializando, pidiendo, y pidiendo el número a factorizar
    int n;
    printf("Ingrese un numero para saber su factorial: ");
    scanf("%d",&n);
    while (n<0)
    {
        printf("ERROR...Ingrese de nuevo un numero para saber su factorial: ");
        scanf("%d",&n);
    }

    //Imprimiendo el factorial
    printf("%d!=%d", n, factorial(n));

    return 0;
}