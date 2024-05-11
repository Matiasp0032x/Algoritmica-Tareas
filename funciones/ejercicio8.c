/*El crecimiento en las ventas de un pequeño Supermercado conduce a la necesidad de 
construir un algoritmo para ayudar a la cajera en el cobro a los clientes. El algoritmo 
deberá recibir, para cada producto, los siguientes datos: Cantidad y Precio unitario 
Este proceso deberá continuar hasta que se ingrese una cantidad igual a cero. A partir 
de estos datos deberá calcular e imprimir el importe total que debe abonar el cliente.
Seguidamente, el algoritmo deberá solicitar el monto que entrega el cliente para abonar 
su cuenta y calcular el vuelto a entregar indicando los billetes y monedas que deben se 
entregados al cliente. Utilizar un subprograma para la realización del proceso.*/
#include <stdio.h>

//Funcion para calcular la suma total de los precios
float calcularTotal(int cantidad, float precios[]) {
    float total = 0;
    for (int i = 0; i < cantidad; i++)
        total += precios[i];
    return total;
}

//Funcion para calcular cuanto debe de darle de vuelto o si debe todavia de pagar más el cliente
void calcularVuelto(float total) {
    float pago, vuelto;
    printf("El total a pagar es: %.2f\n", total);
    printf("Ingrese la cantidad de dinero recibida del cliente: ");
    scanf("%f", &pago);
    if (pago < total) {
        printf("Cantidad insuficiente, debes de PAGARLO O NO LO LLEVAS. Faltan %.2f\n", total - pago);
    } 
    else {
        vuelto = pago - total;
        printf("Vuelto a entregar: %.2f\n", vuelto);
    }
}

int main()
{
    //Damos la bienvenida e inicializamos la cantidad de articulos
    int cant;
    printf("\n------------------------------------\n");
    printf("BIENVENIDO A LA TIENDA DE DONIA MARI\n");
    printf("------------------------------------\n\n");

    //Pedimos la cantidad y validamos
    printf("Ingrese la cantidad de articulos que llevara: ");
    scanf("%d", &cant);
    while (cant<0)
    {
        printf("ERROR\nIngrese la cantidad de articulos que llevara: ");
        scanf("%d", &cant);
    }

    //Inicializamos el vector de los precios y los cargamos y el total calculamos luego
    float precios[cant], total;
    printf("Ingrese los precios de los articulos (uno por uno):\n");
    for (int i = 0; i < cant; i++) {
        printf("Precio del artículo %d: ", i + 1);
        scanf("%f", &precios[i]);
    }
    total = calcularTotal(cant, precios);

    //Verificamos y calculamos el vuelto
    calcularVuelto(total);

    return 0;
}
