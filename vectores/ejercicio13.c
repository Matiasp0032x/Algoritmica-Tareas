#include <stdio.h>
/*Se tiene en memoria un vector V de N elementos. Hacer un algoritmo que permita encontrar e 
imprimir la mediana. Mediana es el elemento del medio o central, si N es impar. Si N es par, 
la mediana es la suma de los dos centrales dividido dos*/

int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int N;
    float mediana;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &N);

    //Validamos el rango del vector
    while (N<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &N);
    }

    //Inicializamos un vector y empezamos a cargar los componentes
    int V[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &V[i]);
    }

    //Mostramos el vector pq si 
    for (int i = 0; i < N; i++)
        printf("%d ", V[i]);
    printf("\n");

    //Ordenamos el vector
    int aux;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (V[j] > V[j + 1]) {
                aux=V[j];
                V[j]=V[j+1];
                V[j+1]=aux;
            }
        }
    }

    //Mostramos el vector ordenado pq si 
    for (int i = 0; i < N; i++)
        printf("%d ", V[i]);
    printf("\n");

    //Vemos si el rango del vector es impar o par para calcular la mediana
    if (N%2==1)
        mediana=(float) V[N/2];
    else
        mediana = (float) (V[N/2-1] + V[N/2])/2;
    printf("La mediana es: %.2f", mediana);
    return 0;
}
