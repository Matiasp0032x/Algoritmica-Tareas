/*Un banco tiene el problema de calcular los intereses que a fin de año habra de acreditar a cada uno 
de los clientes. Los datos son organizados en registros, cada uno de los cuales conteniendo los siguientes campos:
*Código del Cliente
*Capital
*Dia del calendario comercial (año de 360 dias) en el que el capital fue ingresado en el Banco. 
*Tasa de interés convenida
La formula a aplicar es:
Interes = K * i / 100 * 360 - M / 360
Donde:
K es el capital
M es el dia
i es la tasa
Se quiere también calcular el número de clientes, el total de capital depositado y el total de intereses.*/

#include <stdio.h>

int calcular_interes(int capital, int dia, int tasa_interes){
    return (capital * tasa_interes / 100.0 * 360.0 - dia) / 360.0;
}

int main()
{
    int n,cod_clie,capital, dia, tasa_interes;
    int clientes, depositado, interes;
    clientes=depositado=interes=0;
    printf("Iniciando programa, registrando clientes");
    do
    {
        printf("\nQuiere introducir un cliente? (0=No)");
        scanf("%d",&n);
        if (n)
        {
            clientes++;
            printf("Ingrese el codigo del cliente: ");
            scanf("%d",&cod_clie);
            printf("Ingrese la capital del cliente: ");
            scanf("%d",&capital);
            printf("Ingrese el dia del calendario comercial (año de 360 dias) en el que el capital fue ingresado en el Banco por el cliente: ");
            scanf("%d",&dia);
            printf("Ingrese el interes convenido del cliente: ");
            scanf("%d",&tasa_interes);
            printf("El interes a acreditar a este cliente es de: %d", calcular_interes(capital, dia, tasa_interes));
            depositado+=capital;
            interes+=calcular_interes(capital, dia, tasa_interes);
        }
    } while (n!=0);
    printf("\nTotal de Clientes: %d", clientes);
    printf("\nTotal depositado: %d", depositado);
    printf("\nTotal de interes: %d", interes);
    return 0;
}
