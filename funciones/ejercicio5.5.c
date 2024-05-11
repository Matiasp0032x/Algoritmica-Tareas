/*Prueba ordenar ascendentemente cuatro variables numéricas*/
#include <stdio.h>

void ordenar(int vec[4]){
    int aux;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3-i; j++){
            if (vec[j]>vec[j+1]){
                aux=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=aux;
            }
        }
    }
}

int main()
{
    int vec[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Introduzca un valor: ");
        scanf("%d", &vec[i]);
    }
    ordenar(vec);
    for (int i = 0; i < 4; i++)
        printf("%d ", vec[i]);
    
    return 0;
}
