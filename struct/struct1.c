/*Diseñar un registro adecuado para almacenar una fecha*/

#include <stdio.h>

typedef int Luji; //Esto puse pq si, nms tiene su contexto pero detalle, vos si nms Ever

struct fecha {
    Luji day;
    Luji month;
    Luji year;
};

int main() {
    Luji m;
    printf("Ingrese cuantos registros desea hacer: ");
    scanf("%d", &m);
    
    struct fecha registros[m];
    
    for (int i = 0; i < m; i++) {
        printf("Dia: ");
        scanf("%d", &registros[i].day);
        printf("Mes: ");
        scanf("%d", &registros[i].month);
        printf("Anio: ");
        scanf("%d", &registros[i].year);
    }
    
    printf("Fechas ingresadas:\n");
    for (int i = 0; i < m; i++)
        printf("%d - %02d/%02d/%04d\n", i+1, registros[i].day, registros[i].month, registros[i].year);
    
    return 0;
}