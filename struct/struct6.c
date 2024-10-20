/*
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
Modificar el ejemplo 4, para ordenar la lista de alumnos por número de
matrícula.*/
#include <stdio.h>
#include <string.h>

struct Alumno {
    char matricula[20];
    char nombre[50];
    float notas[3];  // Tres notas por alumno
};

void ordenarPorMatricula(struct Alumno clase[], int N) {
    struct Alumno temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (strcmp(clase[j].matricula, clase[j + 1].matricula) > 0) {
                // Intercambiar los alumnos
                temp = clase[j];
                clase[j] = clase[j + 1];
                clase[j + 1] = temp;
            }
        }
    }
}

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

    // Ordenar la lista de alumnos por matrícula
    ordenarPorMatricula(clase, N);

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