//Conjugar un verbo terminado en "ar" en tiempo presento

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //Inicializamos verbos
    char verboinfi[50], verbo[50];

    //Ingresamos un verbo que termine en "ar", sino pues igual sigue el programa, me da paja validar
    //No pruebes colorear, toma las "r" y no sé arreglar, a no ser que me digas como hacer mejor
    printf("Ingrese un verbo infinitivo (que termine en \"ar\"): ");
    fgets(verboinfi, sizeof(verboinfi), stdin);

    //Hacemos copy pega el verbo
    strcpy(verbo, verboinfi);

    //Separamos si tiene "ar"
    strtok(verbo, "ar");

    //Imprimimos las conjugaciones
    printf("\nYo: %s%s",verbo,"o");
    printf("\nTu: %s%s",verbo,"as");
    printf("\nEl/Ella/Usted: %s%s",verbo,"a");
    printf("\nNosotros: %s%s",verbo,"amos");
    printf("\nVosotros: %s%s",verbo,"ais");
    printf("\nEllos/Ellas/Ustedes: %s%s",verbo,"an");
    return 0;
}
