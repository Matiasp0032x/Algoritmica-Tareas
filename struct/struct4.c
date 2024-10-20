/*
Programa EJEMPLO03
var
ALUM: registro
{
MATRICULA: cadena
NOMBRE: cadena
NOTA: vector[3] numérico
}
I, PROM: numerico
inicio
cls()
leer(ALUM.MATRICULA)
leer(ALUM.NOMBRE)
desde I=1 hasta 3
{
Leer (ALUM.NOTA[I])
}
PROM=(ALUM.NOTA [1] + ALUM.NOTA [2] + ALUM.NOTA[3]) / 3
imprimir (“El promedio de”, ALUM.MATRICULA, “-”, ALUM.NOMBRE, “es” ,
PROM)
fin

Modificar el ejemplo 3, sabiendo que el rendimiento del alumno se mide con dos
exámenes parciales y dos trabajos prácticos. Obtener el promedio total del
alumno*/

#include <stdio.h>
#include <string.h>

struct Alumno {
    char matricula[20];
    char nombre[50];
    float examenes[2];  // Dos exámenes parciales
    float trabajos[2];  // Dos trabajos prácticos
};

int main() {
    struct Alumno alum;
    float promexam, promtraba, promtotal;
    promexam = promtraba = promtotal = 0;

    printf("Ingrese la matricula del alumno: ");
    fgets(alum.matricula, sizeof(alum.matricula), stdin);
    alum.matricula[strcspn(alum.matricula, "\n")] = '\0'; 

    printf("Ingrese el nombre del alumno: ");
    fgets(alum.nombre, sizeof(alum.nombre), stdin);
    alum.nombre[strcspn(alum.nombre, "\n")] = '\0';

    for (int i = 0; i < 2; i++) {
        printf("Ingrese la nota del examen %d: ", i + 1);
        scanf("%f", &alum.examenes[i]);
        promexam += alum.examenes[i];
    }
    promexam /= 2;

    for (int i = 0; i < 2; i++) {
        printf("Ingrese la nota del trabajo practico %d: ", i + 1);
        scanf("%f", &alum.trabajos[i]);
        promtraba += alum.trabajos[i];
    }
    promtraba /= 2; 

    promtotal = (promexam + promtraba) / 2;

    printf("El promedio total de %s - %s es %.2f\n", alum.matricula, alum.nombre, promtotal);

    return 0;
}