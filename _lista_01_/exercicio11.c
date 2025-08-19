#include <stdio.h>

int main(){

    printf("\033[J2\033[H");

    float f,c2;
    int c = 0;

    printf("| Celsius | Fahrenheit |");

    for ( c = 0; c <= 100; c++)
    {
        c2 = c;
        f = ((c/5)*9)+32;
        printf("|  %.2f  |  %.2f  |\n",c2,f);
    }
    



return 0;    
}