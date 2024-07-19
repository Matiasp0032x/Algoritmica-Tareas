/*Una empresa necesita un cuadro que refleje los montos de las ventas realizadas.
Por cada venta se deben ingresar los siguientes datos: 
Nro. de factura (9999 para fin)
Sucursal (1 = Centro; 2 = Villa Morra; 3 = Sajonia; 4 = Bo. Jara) 
Forma de pago (1 = efectivo; 2 = Cheque; 3 = Tarjeta)
Monto de la venta

Generar e imprimir el siguiente cuadro:
Sucursal/ Forma de pago       Efectivo       Cheque        Tarjeta       Totales
CEntro
Villamorra
Sajonia
Barrio Jara
Totales
*/

#include <stdio.h>
// #include "E3.c" Esto lo dejo pq estaba haciendo pruebas

void ceracion(int x, int y, int matriz[x][y]){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            matriz[i][j] = 0;
    }
    
}

void imprimision(int x, int y, int matriz[x][y]) {
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[5][4], factos, sucur, formabuy, montoventa;
    ceracion(5, 4, matriz);
    do
    {
        printf("Ingrese el nro de factura (pon 9999 para finalizar): ");
        scanf("%d", &factos);
        if (factos!= 9999){
            printf("Ingrese la sucursal (1 = Centro; 2 = Villa Morra; 3 = Sajonia; 4 = Bo. Jara): ");
            scanf("%d", &sucur);
            printf("Ingrese la forma de pago (1 = Efectivo; 2 = Cheque; 3 = Tarjeta): ");
            scanf("%d", &formabuy);
            printf("Ingrese el monto de la venta: ");
            scanf("%d", &montoventa);
            matriz[sucur - 1][formabuy - 1] += montoventa;
            matriz[4][formabuy - 1] += montoventa;
            matriz[sucur - 1][3] += montoventa;
            matriz[4][3]+= montoventa;
        }
    } while (factos != 9999);
    imprimision(5, 4, matriz);
    return 0;
}
