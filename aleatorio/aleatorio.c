#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int random =  1 + rand() % 2;
        printf("%d\n", random);
    }
    
    return 0;
}
