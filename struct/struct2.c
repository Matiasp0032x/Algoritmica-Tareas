/*Utilizar dicho diseño, construya un algoritmo para verificar si una fecha es válida.*/
#include <stdio.h>

struct fecha {
    int day;
    int month;
    int year;
};

int verificacion(struct fecha f) {
    switch (f.month) {
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12:
        if (f.day >= 1 && f.day <= 31)
            return 1;  // Fecha válida
        break;
    case 2:
        if ((f.year % 4 == 0 && f.year % 100 != 0) || f.year % 400 == 0) {  // Año bisiesto
            if (f.day >= 1 && f.day <= 29)
                return 1;  // Fecha válida
        } else {
            if (f.day >= 1 && f.day <= 28)
                return 1;  // Fecha válida
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (f.day >= 1 && f.day <= 30)
            return 1;  // Fecha válida
        break;
    }
    return 0;  // Fecha inválida
}

int main() {
    int m;
    printf("Ingrese cuantos registros desea hacer: ");
    scanf("%d", &m);

    struct fecha registros[m];

    for (int i = 0; i < m; i++) {
        int es_valido = 0;  // Bandera para verificar si la fecha es válida
        printf("Registro %d:\n", i + 1);
        printf("Dia: ");
        scanf("%d", &registros[i].day);
        printf("Mes: ");
        scanf("%d", &registros[i].month);
        printf("Anio: ");
        scanf("%d", &registros[i].year);
        // Verificar la validez de la fecha
        es_valido = verificacion(registros[i]);
        if (!es_valido) {
            printf("La fecha %02d/%02d/%04d es invalida. Por favor, vuelva a introducirla.\n", 
            registros[i].day, registros[i].month, registros[i].year);
            i--;  // Volver al ciclo anterior para volver a ingresar la fecha
        }
    }

    printf("\nFechas ingresadas:\n");
    for (int i = 0; i < m; i++)
        printf("%d - %02d/%02d/%04d\n", i + 1, registros[i].day, registros[i].month, registros[i].year);

    return 0;
}
