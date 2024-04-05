#include <stdio.h>
/*Realizar un ejemplo de menú, donde podemos escoger las distintas
opciones hasta que seleccionamos la opción de “Salir”.*/
int main()
{
    int op, x,y;
    printf("\nIngrese dos numero: ");
    scanf("%d %d", &x, &y);
    do
    {
        printf("\n1-Sumar");
        printf("\n2-Restar");
        printf("\n3-Multiplicar");
        printf("\n4-Dividir");
        printf("\n5-Salir");
        printf("\nIngrese un numero: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\n%d+%d=%d\n",x,y,x+y);
            break;
        case 2:
            printf("\n%d-%d=%d\n",x,y,x-y);
            break;
        case 3:
            printf("\n%d*%d=%d\n",x,y,x*y);
            break;
        case 4:
            printf("\n%d/%d=%.1f\n",x,y,(float)x/y);
            break;
        case 5:
            break;
        default:
        printf("\nERROR AL ELEGIR OPCION");
            break;
        }
    } while (op!=5);
    return 0;
}
