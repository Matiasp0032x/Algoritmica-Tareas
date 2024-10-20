/*Programa EJEMPLOO4
var
N, I, J, PROM_ALUM, PROM_CLASE, SUM_ALUM: numerico
SUM_EXAM: vector[3] numérico
CLASE: vector [*] registro
{
MAT: cadena
NOM:cadena
NOTA: vector[3] numerico
}
inicio
cls()
imprimir(“Ingrese la cantidad de alumnos:?”)
leer(N)
dim (CLASE, N)
desde J=1 hasta N
{
leer(CLASE[J].MAT)
leer(CLASE[J].NOM)
desde I=1 hasta 3
{
Leer (CLASE[J].NOTA[I])
}
}
desde J= 1 hasta N
{
SUM_ALUM=0
desde I=1 hasta 3
{
SUM_ALUM= SUM_ALUM + CLASE[J].NOTA[I]
SUM_EXAM[I]=SUM_EXAM[I]+CLASE[J].NOTA[I]
}
PROM_ALUM=SUM_ALUM/ 3
imprimir (“El promedio de”, CLASE[J].MAT, “_”, CLASE[J].NOM, “es”,
PROM_ALUM)
imprimir (“/n”)
}
desde I=1 hasta 3
{
imprimir(“PROMEDIO EXAMEN (”, I, “)=”, SUM_EXAM[I]/ N)
}

Modificar el ejemplo 4, para calcular también: el promedio de la clase en cada
examen y el alumno que tiene el promedio más alto.*/

#include <stdio.h>
#include <string.h>

struct Alumno {
    char matricula[20];
    char nombre[50];
    float notas[3];  // Tres notas por alumno
};

int main() {
    int N;
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &N);

    struct Alumno clase[N];
    float sum_examen[3] = {0};  // Para almacenar la suma de las notas de cada examen
    float prom_clase = 0;  // Promedio de la clase en cada examen
    float max_prom_alum = 0;  // Promedio más alto entre los alumnos
    char alumno_max_prom[50];  // Almacena el nombre del alumno con el promedio más alto

    for (int j = 0; j < N; j++) {
        printf("Ingrese la matricula del alumno %d: ", j + 1);
        scanf("%s", clase[j].matricula);
        printf("Ingrese el nombre del alumno %d: ", j + 1);
        getchar();  // Consumir el salto de línea previo
        fgets(clase[j].nombre, sizeof(clase[j].nombre), stdin);
        clase[j].nombre[strcspn(clase[j].nombre, "\n")] = '\0';  // Eliminar salto de línea

        for (int i = 0; i < 3; i++) {
            printf("Ingrese la nota %d del alumno %d: ", i + 1, j + 1);
            scanf("%f", &clase[j].notas[i]);
            sum_examen[i] += clase[j].notas[i];  // Sumar la nota al examen correspondiente
        }
    }

    printf("\nResultados:\n");
    for (int j = 0; j < N; j++) {
        float sum_alum = 0;  // Suma de notas del alumno
        for (int i = 0; i < 3; i++) {
            sum_alum += clase[j].notas[i];
        }

        float prom_alum = sum_alum / 3;
        printf("El promedio de %s - %s es %.2f\n", clase[j].matricula, clase[j].nombre, prom_alum);

        if (prom_alum > max_prom_alum) {
            max_prom_alum = prom_alum;
            strcpy(alumno_max_prom, clase[j].nombre);
        }
    }

    for (int i = 0; i < 3; i++) {
        prom_clase = sum_examen[i] / N;
        printf("PROMEDIO EXAMEN %d = %.2f\n", i + 1, prom_clase);
    }

    printf("\nEl alumno con el promedio más alto es %s con un promedio de %.2f\n", alumno_max_prom, max_prom_alum);

    return 0;
}
