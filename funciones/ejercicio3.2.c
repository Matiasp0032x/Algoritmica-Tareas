/*Se cuenta con una lista de m números que, con certeza, forman parte de una progresión geométrica, 
aunque no se trata necesariamente de términos sucesivos. Escribir un algoritmo para imprimir la 
progresión completa entre el menor y el mayor valor de la lista. Utilizar un subprograma para el proceso.
Ejemplo de progresión geométrica: 1,2,4,8,16 razón 2. La razón geométrica es la comparación de dos 
cantidades por su cociente, donde se ve cuántas veces contiene una a la otra.... Una razón «X:Y» se 
puede leer como «X sobre Y», o bien «X es a Y». El numerador de la razón (es decir, el X) se llama 
antecedente y al denominador (el Y) se le conoce como consecuente.*/
#include <stdio.h>
#include <stdlib.h>

//Función de comparación para qsort
int compfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

//Función para imprimir la progresion geometrica
void progresion(int vector[], int n) {
    //Le metemos a el menor, el mayor y la razon
    int menor = vector[0];
    int mayor = vector[n-1];
    int razon = vector[1] / vector[0];

    //Imprimiendo los terminos de la progresion geometrica desde menor hasta mayor
    for (int i = menor; i <= mayor; i *= razon)
        printf("%d ", i);
}

int main() {
    //Inicializamos las variables
    int m;
    printf("Introduzca el rango del vector (PONE AL MENOS 2 o ya veras q te hare): ");
    scanf("%d", &m);
    while (m < 2) {
        printf("ERROR, si seguis asi te pongo 0 puntos como tutor\nIntroduzca el rango del vector de nuevo, ya te lo sabes: ");
        scanf("%d", &m);
    }

    //Inicializamos y cargamos el vector
    int vec[m];
    for (int i = 0; i < m; i++) {
        printf("Introduzca un numero: ");
        scanf("%d", &vec[i]);
    }

    //Ordenando el vector
    qsort(vec, m, sizeof(int), compfunc);

    //Imprimiendo el vector ordenado pq si
    for (int i = 0; i < m; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    //Pasamos el vector a la funcion progresion
    progresion(vec, m);

    return 0;
}