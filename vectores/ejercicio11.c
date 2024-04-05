#include <stdio.h>
/*Se tiene en memoria un vector B de tamaño X. Hacer un algoritmo que permita crear 
un vector A partir de B, tal que cada A(X) = B(X) - mayor de B*/
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int x, mayor;
    printf("Introduzca el rango del vector: ");
    scanf("%d", &x);

    //Validamos el rango del vector
    while (x<1)
    {
        printf("ERROR DE INTRODUCCION DE RANGO\n...\n...\n...\n");
        printf("Introduzca el rango del vector: ");
        scanf("%d", &x);
    }

    //Inicializamos vector B y empezamos a cargar los componentes
    int B[x];
    for (int i = 0; i < x; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", &B[i]);

    //Hallamos el elemento mayor del vector B 
        if (i==0)
            mayor=B[0];
        if (B[i]>mayor)
            mayor=B[i];
    }

    //Inicializamos vector A y lo cargamos
    int A[x];
    for (int i = 0; i < x; i++)
        A[i]=B[i]-mayor;

    //Imprimimos los vectores
    for (int i = 0; i < x; i++)
        printf("B%d=%d\tA%d=%d\n", i+1,B[i],i+1,A[i]);
    return 0;
}