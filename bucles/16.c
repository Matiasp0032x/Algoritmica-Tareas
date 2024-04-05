#include <stdio.h>
/*Una empresa les paga a sus empleados con base en las horas trabajadas en la semana. 
Realice un algoritmo para determinar el sueldo semanal de N trabajadores y, además, 
calcule cuánto pagó la empresa por los N empleados.*/
int main()
{
    int hs, n;
    float sueldo, paga=0;
    printf("Cuantos trabajadores seran registrados: ");
    scanf("%d", &n);
    float sueldotra[n];
    printf("Cuantos es el cobro por hora: ");
    scanf("%f", &sueldo);
    for (int i = 0; i < n; i++)
    {
        printf("Cuantas horas trabajo el empleado %d en la semana: ", i+1);
        scanf("%d", &hs);
        sueldotra[i]=(float)sueldo*hs;
        paga+=sueldotra[i];
    }
    for (int i = 0; i < n; i++)
        printf("\nEl pago semanal del empleado %d es: %.2f", i+1, sueldotra[i]);
    printf("\nEl pago total de la empresa es: %.2f", paga);
    return 0;
}