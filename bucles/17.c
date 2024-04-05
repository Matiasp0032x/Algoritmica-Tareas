#include <stdio.h>
/*Una empresa les paga a sus empleados con base en las horas trabajadas en la semana. 
Para esto, se registran los días que trabajó y las horas de cada día. Realice un 
algoritmo para determinar el sueldo semanal de N trabajadores y además calcule 
cuánto pagó la empresa por los N empleados*/
int main()
{
    int hs, sumhs, dias, n;
    float sueldo, paga;
    printf("Cuantos trabajadores seran registrados: ");
    scanf("%d", &n);
    float sueldotra[n];
    printf("Cuantos es el cobro por hora: ");
    scanf("%f", &sueldo);
    for (int i = 0; i < n; i++)
    {
        sumhs=0;
        printf("Cuantos dias trabajo el empleado %d: ", i+1);
        scanf("%d", &dias);
        for (int j = 0; j < dias; j++)
        {
            printf("Cuantos horas trabajo el empleado %d en el dia %d: ", i+1, j+1);
            scanf("%d", &hs);
            sumhs+=hs;
        }
        sueldotra[i]=(float)sueldo*sumhs;
        paga+=sueldotra[i];
    }
    for (int i = 0; i < n; i++)
        printf("\nEl pago semanal del empleado %d es: %.2f", i+1, sueldotra[i]);
    printf("\nEl pago total de la empresa es: %.2f", paga);
    return 0;
}