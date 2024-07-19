/*Se desea un resumen de cuántos profesionales (médicos, abogados, ingenieros y arquitectos), 
hay en algunos departamentos del país. Los datos que se deben ingresar son los siguientes:
Nombre del profesional (Enter para fin) 
Nro. Departamento (1= Concep; 2 San Pedro; 3 = Itapúa; 4 = Central; 5 = Misiones)
Código de profesión (1 = Médico; 2 = Abogado; 3 Ingeniero; 4 = Arquitecto) 
Hacer un proceso que a partir de los datos ingresados genere e imprima el siguiente cuadro:
Dpto \ Profesión       Médicos     Abogados        Ingenieros       Arquitectos       TOTALES
Concepcion              0               2               0               0               2
San Pedro               0               0               1               0               1
Itapua                  1               0               0               0               1
Central                 0               0               0               0               0
Misiones                0               0               0               0               0
TOTALES                 1               2               1               0               4
*/

#include <stdio.h>
#include <string.h>

void ceracion(int matriz[6][5]){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
            matriz[i][j] = 0;
    }
    
}

int main()
{
    int matriz[6][5], cont = 0, nro_dto, cod_pro;
    char nombre[100];
    ceracion(matriz);
    do
    {
        printf("Introduzca el nombre del profesional %d: ", cont+1);
        fgets(nombre, 100, stdin);
        nombre[strcspn(nombre, "\n")] = '\0';  
        printf("\nCual es el nro de departamento en el cual trabaja %s (0 = Ninguno de estos; 1= Concep; 2 San Pedro; 3 = Itapua; 4 = Central; 5 = Misiones)? ", nombre);
        scanf("%d",&nro_dto);
        printf("Cual es el codigo de profesional de %s (0 = Ninguno de estos; 1 = Medico; 2 = Abogado; 3 Ingeniero; 4 = Arquitecto)? ", nombre);
        scanf("%d",&cod_pro);
        while(getchar() != '\n');
        if (cod_pro != 0 && nro_dto != 0)
        {
            cod_pro--;nro_dto--;
            matriz[cod_pro][nro_dto]++;
            matriz[cod_pro][4]++;
            matriz[5][nro_dto]++;
            matriz[5][4]++;
        }
        cont++;
        printf("\n");
    } while (cont<30);
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5; j++)
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }
    return 0;
}
