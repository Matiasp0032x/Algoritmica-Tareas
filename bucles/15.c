#include <stdio.h>
/*Una persona adquirió un producto para pagar en 20 meses. El primer mes pagó 10 €, 
el segundo 20 €, el tercero 40 € y así sucesivamente. Realizar un algoritmo para 
determinar cuánto debe pagar mensualmente y el total de lo que pagó después de los 20 meses.*/
int main()
{
    int sum=0, pago[20];
    pago[0]=10;
    for (int i = 0; i < 19; i++)
    {
        pago[i+1]=pago[i]*2;
        sum+=pago[i];
    }
    printf("\nEn los 20 meses pagara un total de: %d\n", sum);
    for (int i = 0; i < 20; i++)
        printf("\nEn el mes %d pagara: %d", i+1, pago[i]);
    return 0;
}