#include <stdio.h>


int main(){

    printf("\033[2J\033[H");

    int i = 1;
    int soma = 0;

    while (i<=100)
    {
        if ((i%2)==0)
            soma = soma + i;
        
        i++;
        
    }

    printf("A soma é: %i",soma);
    





return 0;    
}