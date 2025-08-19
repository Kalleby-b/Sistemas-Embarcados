#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int i = 100;

    while (i>=1)
    {
        printf("%i\n",i);
        i--;
    }
    




return 0;    
}