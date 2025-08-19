#include <stdio.h>

int main(){

    int max;

    printf("\033[2J\033[H");

    printf("Até onde calcular? ");
    scanf("%i",&max);

    int i;
    
    for( i = 1; i <= max; i++)
    {
        int cubo = i*i*i;
        printf("%i\u00B3= %i\n",i,cubo);
    }
    





return 0;
}