#include <stdio.h>
/*Leer un vector de N componentes. Hallar e imprimir el promedio de todas sus posiciones impares*/
int main()
{
    //Inicializamos variables y pedimos el rango del vector
    int N, sum=0, c=0;
    printf("Introduzca la longitud del vector: ");
    scanf("%d", &N);
    int vec[N];
    float prom;

    //Cargamos el vector y verificamos si el valor del componente es impar, y si es asi se van sumando e incrementa un contador
    for (int i = 0; i < N; i++)
    {
        printf("Introduzca un valor: ");
        scanf("%d", &vec[i]);
        if ((i+1)%2==1)
        {   
            sum+=vec[i];
            c++;
        }
    }

    //Calculamos el promedio de los valores impares del vector y luego lo imprimimos
    prom=(float)sum/c;
    printf("El promedio de los numeros impares es: %.2f", prom);
    return 0;
}