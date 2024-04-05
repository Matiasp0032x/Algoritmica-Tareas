#include <stdio.h>
#include <unistd.h>
/*Hacer un programa que muestre un cronometro, indicando las horas, minutos y segundos.*/
int main()
{
    int horas=0, minutos=0, segundos=0, tiempo;
    printf("Cuanto tiempo en segundos desea cronometrar: ");
    scanf("%d", &tiempo);
    while (1) {
        printf("%02d:%02d:%02d\r", horas, minutos, segundos);
        fflush(stdout);

        segundos++;

        if (segundos == 60) {
            minutos++;
            segundos = 0;
        }

        if (minutos == 60) {
            horas++;
            minutos = 0;
        }

        sleep(1);  // Pausar la ejecución por 1 segundo
        if (horas * 3600 + minutos * 60 + segundos > tiempo) 
            break;
    }
    printf("\nFIN DEL CRONOMETRO");
    return 0;
}
