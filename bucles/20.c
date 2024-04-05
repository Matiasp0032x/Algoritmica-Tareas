#include <stdio.h>
/*Mostrar en pantalla los N primero número primos. Se pide por teclado la
cantidad de números primos que queremos mostrar.*/
int main() {
    int n,c=0;
    printf("Ingrese la cantidad de numeros primos que desea ver: ");
    scanf("%d", &n);

    while (n <= 0) 
    {
        printf("ERROR, Ingrese la cantidad de numeros primos que desea ver:\n ");
        scanf("%d", &n);
    }

    printf("Los primeros %d numeros primos son:\n", n);
    int veri = 2; 

    while (c < n) {
        int pri = 1;
        for (int i = 2; i * i <= veri; i++) //En ves de usar sqrt()
        {
            if (veri % i == 0) 
            {
                pri = 0;
                break;
            }
        }
        if (pri==1) 
        {
            printf("%d ", veri);
            c++;
        }
        veri++;
    }
    return 0;
}