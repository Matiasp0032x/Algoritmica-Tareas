#include <stdio.h>
/*Algoritmo que pida números hasta que se introduzca un cero.
Debe imprimir la suma y la media de todos los números introducidos.*/
int main()
{
    int n, suma=0, cant=0;
    float pro;
    do
    {
        printf("Ingrese un numero (Si desea finalizar ponga 0): ");
        scanf("%d",&n);
        if (n!=0)
        {
            suma+=n;
            cant++;
        }
    } while (n!=0);
    pro=(float)suma/cant;
    printf("La suma de los numeros ingresados es: %d\n", suma);
    printf("El promedio de los numeros ingresados es: %.2f\n", pro);
    return 0;
}
