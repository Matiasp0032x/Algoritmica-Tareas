/*Una empresa necesita un cuadro sobre la cantidad de personas que cobran los distintos rangos de sueldos. 
Hacer un proceso que permita ingresar los siguientes datos: 
Código de empleado (9999 para fin)
Código de sexo (1 = Masculino; 2 = Femenino)
Sueldo (en miles)
Generar e imprimir el siguiente cuadro
Sexo / Sueldo en miles    <= 200      > 200 && <= 400      > 400 && <= 600      > 600 && <= 800    > 800   TOTALES
Hombres
Mujeres
TOTALES
*/

#include <stdio.h>

void ceracion(int matriz[3][6]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
            matriz[i][j] = 0;
    }
    
}

int main()
{
    int matriz[3][6], codemp, codesex, sueldo;
    ceracion(matriz);
    do
    {
        printf("Ingrese el codigo del empleado: (9999 para finalizar)");
        scanf("%d", &codemp);
        if (codemp!= 9999){
            do {
                printf("Ingrese el codigo del sexo (1 = Masculino; 2 = Femenino): ");
                scanf("%d", &codesex);
                if (codesex != 1 && codesex != 2) {
                    printf("Código de sexo inválido. Por favor ingrese 1 (Masculino) o 2 (Femenino).\n");
                }
            } while (codesex != 1 && codesex != 2);
            do {
                printf("Ingrese el sueldo en miles(k): ");
                scanf("%d", &sueldo);
                if (sueldo < 0) {
                    printf("Sueldo inválido. Por favor ingrese un sueldo no negativo.\n");
                }
            } while (sueldo < 0);
                if (sueldo <= 200){codesex==1 ? matriz[0][0]++ : matriz[1][0]++; matriz[2][0]++;}
                else if (sueldo > 200 && sueldo <= 400) {codesex==1 ? matriz[0][1]++ : matriz[1][1]++; matriz[2][1]++;}
                else if (sueldo > 400 && sueldo <= 600) {codesex==1 ? matriz[0][2]++ : matriz[1][2]++; matriz[2][2]++;}
                else if (sueldo > 600 && sueldo <= 800) {codesex==1 ? matriz[0][3]++ : matriz[1][3]++; matriz[2][3]++;}
                else {codesex==1 ? matriz[0][4]++ : matriz[1][4]++; matriz[2][4]++;};
            matriz[codesex-1][5]++;
            matriz[2][5]++;
        }
    } while (codemp != 9999);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    return 0;
}
