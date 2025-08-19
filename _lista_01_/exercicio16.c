#include <stdio.h>

int main(){

    int valor;

    printf("\033[2J\033[H");
    printf("Um numero para ter sua tabuada: ");
    scanf("%i",&valor);

    printf("----Tabuada----\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%i x %i = %i\n",valor,i,(valor*i));
    }
    




return 0;
}