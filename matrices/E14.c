/*Las notas de un colegio se tienen en una matriz de 30* 5 elementos (30, número de alumnos, 5 número
de asignaturas). Se desea listar las notas de cada alumno y su media. Cada alumno tiene como mínimo
dos asignaturas y máximo cinco, aunque los alumnos no necesariamente todos tienen que tener cinco materias.*/

#include <stdio.h>
#include <stdlib.h>

void calculo(int matriz[30][5]) {
    int suma, contador;
    float media;
    for (int i = 0; i < 30; i++) {
        suma = 0;
        contador = 0;
        printf("Alumno %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] != -1) {
                suma += matriz[i][j];
                contador++;
                printf("Materia %d: %d\n", j + 1, matriz[i][j]);
            }
        }
        media = (float)suma / contador;
        printf("Media del alumno %d: %.2f\n", i + 1, media);
        printf("\n");
    }
}

int main() {
    int matriz[30][5];

    for (int i = 0; i < 30; i++) {
        int contador = 0;
        for (int j = 0; j < 5; j++) {
            printf("Ingrese la nota del alumno %d en la materia %d (pon -1 si no esta en esta materia): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] != -1) 
                contador++;
        }

        if (contador < 2) {
            printf("El alumno %d tiene menos de dos notas validas. Ingrese nuevamente las notas.\n", i + 1);
            i--;
        }
        system("CLS");
    }
    calculo(matriz);
    return 0;
}
