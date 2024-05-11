/*Ingrese los puntos alcanzados por un alumno e imprima su nota. Para calcular su nota 
toma la siguiente escala:
Nota   Rango
1     1  -   60
2    61  -   70
3    71  -   80
4    81  -   94
5    95  -  100
*/
#include <stdio.h>

int rango(int notas){
    if (notas>=1 && notas<=60)
        return 1;
    else if (notas>=61 && notas<=70)
        return 2;
    else if (notas>=71 && notas<=80)
        return 3;
    else if (notas>=81 && notas<=94)
        return 4;
    else
        return 5;
}

int main()
{
    int puntos;
    printf("Introduzca cuantos puntos alcanzo el estudiante: ");
    scanf("%d", &puntos);
    while (puntos<=0 || puntos>100)
    {
        printf("ERROR\nIntroduzca cuantos puntos alcanzo el estudiante: ");
        scanf("%d", &puntos);
    }
    
    printf("Su nota final con %d puntos sera de: %d", puntos, rango(puntos));
    return 0;
}
