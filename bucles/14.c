#include <stdio.h>
/*Una persona se encuentra en el kilómetro 70 de una carretera, otra se encuentra en el km 150, 
los coches tienen sentido opuesto y tienen la misma velocidad. Realizar un programa 
para determinar en qué kilómetro de esa carretera se encontrarán.

-----------70------------------------------150--------------------------
S1=70+Vt, S2=150-Vt, ¿Donde se encontraran?
150-70=2Vt
40=Vt
70+40=110
150-40=110
*/

int main()
{
    int S1=70, S2=150;
    while (S1!=S2)
    {
        S1++;
        S2--;
    }
    printf("Se encuentran en el kilometro %d", S1);
    return 0;
}
