/*Un Club deportivo necesita controlar los deportes que practican sus socios. 
Hacer un proceso que permita ingresar los siguientes datos: 
Nombre del socio (Enter para fin)
Código de sexo (1 = Masculino; 2 = Femenino) 
Estado civil (1 = Cas; 2 = viu; 3 = Sol; 4 = Div)
Código de deporte (1 a 9)

Imprimir el siguiente cuadro
Sexo                      Masculino              Femenino           Totales
Deporte/E.Civil         Soltero  Otro        Soltera   otro
Deporte 1
Deporte 2
-
-
-
Deporte 9
Totales
*/

#include <stdio.h>
#include <string.h>

void ceracion(int x, int y, int matriz[x][y]){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            matriz[i][j] = 0;
    }
    
}

void imprimision(int x, int y, int matriz[x][y]) {
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char socio[100];
    int codesex, estcivil, codesport, matriz[10][5];
    ceracion(10, 5, matriz);
    do
    {
        printf("Ingrese el nombre del socio (Escribi FIN para finalizar): ");
        fgets(socio, sizeof(socio), stdin);
        socio[strcspn(socio, "\n")] = '\0';
        if (strcmp(socio,"FIN")!=0)
        {
            printf("Ingrese el código de sexo (1 = Masculino; 2 = Femenino): ");
            scanf("%d", &codesex);
            printf("Ingrese el código de estado civil (1 = Casado; 2 = Viudo; 3 = Soltero; 4 = Divorciado): ");
            scanf("%d", &estcivil);
            printf("Ingrese el código de deporte (1 a 9): ");
            scanf("%d", &codesport);
            while (getchar() != '\n');
            switch (codesport)
            {
            case 1:
                if (codesex == 1){estcivil == 3 ? matriz[0][0]++ : matriz[0][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[0][2]++ : matriz[0][3]++;}
                matriz[0][4]++;
                break;
            case 2:
                if (codesex == 1){estcivil == 3 ? matriz[1][0]++ : matriz[1][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[1][2]++ : matriz[1][3]++;}
                matriz[1][4]++;
                break;
            case 3:
                if (codesex == 1){estcivil == 3 ? matriz[2][0]++ : matriz[2][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[3][2]++ : matriz[3][3]++;}
                matriz[3][4]++;
                break;
            case 4:
                if (codesex == 1){estcivil == 3 ? matriz[3][0]++ : matriz[3][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[3][2]++ : matriz[3][3]++;}
                matriz[3][4]++;
                break;
            case 5:
                if (codesex == 1){estcivil == 3 ? matriz[4][0]++ : matriz[4][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[4][2]++ : matriz[4][3]++;}
                matriz[4][4]++;
                break;
            case 6:
                if (codesex == 1){estcivil == 3 ? matriz[5][0]++ : matriz[5][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[5][2]++ : matriz[5][3]++;}
                matriz[5][4]++;
                break;
            case 7:
                if (codesex == 1){estcivil == 3 ? matriz[6][0]++ : matriz[6][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[6][2]++ : matriz[6][3]++;}
                matriz[6][4]++;
                break;
            case 8:
                if (codesex == 1){estcivil == 3 ? matriz[7][0]++ : matriz[7][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[7][2]++ : matriz[7][3]++;}
                matriz[7][4]++;
                break;
            case 9:
                if (codesex == 1){estcivil == 3 ? matriz[8][0]++ : matriz[8][1]++;}
                else if (codesex == 2){estcivil == 3 ? matriz[8][2]++ : matriz[8][3]++;}
                matriz[8][4]++;
                break;
            }
            switch (codesex)
            {
            case 1:
                if (estcivil == 3)
                    matriz[9][0]++;
                else
                    matriz[9][1]++;
                break;
            case 2:
                if (estcivil == 3)
                    matriz[9][2]++;
                else
                    matriz[9][3]++;
                break;
            }
            matriz[9][5]++;
        }
        
        
    } while (strcmp(socio, "FIN")!=0);
    imprimision(10, 5, matriz);
    return 0;
}