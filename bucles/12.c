#include <stdio.h>
/*Realizar un algoritmo para determinar cuánto ahorrará una persona en un año, 
si al final de cada mes deposita cantidades variables de dinero; además, 
se quiere saber cuánto lleva ahorrado cada mes.*/
int main()
{
    int sum=0, ahorro[12];
    for (int i = 0; i < 12; i++)
    {
        printf("Indique cuanto ahorrara este mes: ");
        scanf("%d", &ahorro[i]);
        sum+=ahorro[i];
    }
    printf("\nEn el anio ahorrara: %d\n", sum);
    for (int i = 0; i < 12; i++)
        printf("\nEn el mes %d ahorrara: %d", i+1, ahorro[i]);
    return 0;
}