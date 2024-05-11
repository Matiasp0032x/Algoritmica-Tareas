/*El matemático Fermat propuesto el siguiente teorema: Non existen tres números A, B y C enteros paras los
cuales se cumpla que An=Bn + Cn cuando n es mayor que 2. Escribir un algoritmo que verifique el 
cumplimiento de este teorema para valores de A, B y C comprendidos entre 1 y 20 y valores de n entre 
3 y 5. Utilizar un subprograma para la realización del proceso.*/
#include <stdio.h>
#include <math.h>

//Vemos si es cierto el teorema este, aunque sabemos que no
void teorema_fermat(long int x){
    for (long int A = 1; A <= x; A++)
    {
        for (long int B = 1; B <= x; B++)
        {
            for (long int C = 1; C <= x; C++)
            {
                for (int n = 3; n <= 5; n++)
                {
                    if (pow(A,n)==(pow(B,n)+pow(C,n)))
                    {
                        printf("Fermat tiene toda la razon, es un crack\n");
                        printf("Los numeros fueron:\n");
                        printf("%ld^%d=%ld^%d+%ld^%d",A,n,B,n,C,n);
                    }
                    
                }
                
            }
            
        }
        
    }
    printf("No funciono con %ld\n", x);
}

int main()
{
    //Probamos con 20, 100, 200, 300, 400, 500 y 1000
    //No recomiendo ejecutar el codigo sin quitar el de 400, 500 y 1000
    teorema_fermat(20);
    teorema_fermat(100);
    teorema_fermat(200);
    teorema_fermat(300);
    //teorema_fermat(400);
    //teorema_fermat(500);
    //teorema_fermat(1000);
    return 0;
}