#include <stdio.h>
/*Una empresa tiene el registro de las horas que trabaja diariamente un 
empleado durante la semana (seis días) y requiere determinar el total de 
éstas, así como el sueldo que recibirá por las horas trabajadas.*/
int main()
{
    int hs, sumhs=0;
    float sueldo, sueldofin;
    for (int i = 1; i <= 6; i++)
    {
        printf("Ingrese las horas del dia %d del empleado: ", i);
        scanf("%d", &hs);
        sumhs+=hs;
    }
    printf("\nIngrese el sueldo del empleado por hora: ");
    scanf("%f", &sueldo);
    sueldofin=sueldo*sumhs;
    printf("El sueldo total por %d horas a la semana es: %.2f", sumhs, sueldofin);
    return 0;
}