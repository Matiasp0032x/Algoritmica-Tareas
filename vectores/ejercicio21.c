#include <stdio.h>
#include <math.h>
/*Realice un pseudocódigo que lea un arreglo de N datos y asigne a sus elementos 
los valores 1, 4, 9, 16........etc. (12, 22, 32...).
*/
int main()
{
    //Inicializamos y pedimos el rango del vector
    int N;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &N);
    }

    //Inicializamos un vector y empezamos a cargar los componentes dependiendo del caso, ah y tambien los imprimimos
    int vec[N];
    printf("\nCASO 1 --- PROGRESION de 1^2 hasta N^2\n");
    for (int i = 0; i < N; i++)
    {
        vec[i]=pow(i+1,2);
        printf("%d ",vec[i]);
    }

    printf("\nCASO 2 --- PROGRESION de 2+10*1 hasta 2+10*N\n");
    for (int i = 0; i < N; i++)
    {
        vec[i]=2+10*(i+1);
        printf("%d ",vec[i]);
    }
    return 0;
}
