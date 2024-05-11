/*Calcular el cociente y el resto de una división entera*/
#include <stdio.h>

//Funcion para calcular el cociente
int cociente(int n1, int n2){
    int resultado = n1/n2;
    return resultado;
}

//Funcion para calcular el resto
int resto(int n1, int n2){
    int resultado = n1%n2;
    return resultado;
}
int main()
{
    //Inicializamos las variables
    int n1, n2, result_cocien, result_resto;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &n1, &n2);

    //Le pasamos a las funciones los numeros pedidos anteriormente y nos devuelve un resultado
    result_cocien=cociente(n1,n2);
    result_resto=resto(n1,n2);

    //Mostramos el resultado
    printf("\nEl cociente entre %d y %d es: %d\n", n1, n2, result_cocien);
    printf("El resto entre %d y %d es: %d", n1, n2, result_resto);
    return 0;
}
