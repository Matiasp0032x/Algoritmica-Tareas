/*Un alumno tiene los resultados de sux exámenes finales correspondientes a las materias que ha cursado 
hasta ahora. Necesita que puedas ingresar por teclado los puntos y luego de sumarlos todos, se imprime 
la cantidad total de puntos acumulados, y el promedio. Por cada puntuación que sea ingresado se debe 
imprimir su nota Recuerda, el total de notas y el promedio solo puede ser impreso después de Ingresar la última*/
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
    int mat, sum=0, sum_notas=0;
    float prom, prom_notas;
    printf("Introduzca la cantidad de materias que tiene: ");
    scanf("%d", &mat);
    int puntos[mat];
        for (int i = 0; i < mat; i++){
            printf("\nIntroduzca cuantos puntos alcanzo en la materia %d: ",i+1);
            scanf("%d", &puntos[i]);
            while (puntos[i]<=0 || puntos[i]>100)
            {
                printf("ERROR\nIntroduzca cuantos puntos alcanzo el estudiante: ");
                scanf("%d", &puntos[i]);
            }
            printf("Su nota final con %d puntos en la materia %d sera de: %d\n", puntos[i], i+1, rango(puntos[i]));
            sum+=puntos[i];
            sum_notas+=rango(puntos[i]);
        }
    prom=(float)sum/mat;
    prom_notas=(float)sum_notas/mat;
    printf("\nLa suma de sus puntos en todas las materias es de: %d\n", sum);
    printf("El promedio de sus puntos en todas las materias es de: %.2f\n", prom);

    printf("\nLa suma de sus notas en todas las materias es de: %d\n", sum_notas);
    printf("El promedio de sus notas en todas las materias es de: %.2f", prom_notas);
    return 0;
}