#include <stdio.h>
/*Leer un vector de 20 componentes. Multiplicar sus elementos y al finalizar imprimir el resultado*/
int main()
{
    //Inicializamos las variables y una constante que sea la longitud del vector
    const int len = 20; 
    int vec[len], mult=1;

    //Cargamos el vector y multiplicamos sus componentes. Luego imprimimos el resultado
    for (int i = 0; i < len; i++)
    {
        printf("Introduzca un valor: ");
        scanf("%d", &vec[i]);
        mult*=vec[i];
    }
    printf("El resultado es: %d", mult);
    return 0;
}
