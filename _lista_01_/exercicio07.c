#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int i =0;
    int var[20];

    while (i<20)
    {
        printf("Digite o numero e aperte Enter: ");
        scanf("%i",&var[i]);
        printf("\n");
        i++;
    }
    
    int k;
    int soma = 0;

    for ( k = 0; k < 20; k++)
    {

        if((var[k]*var[k])<225)
            soma = soma + var[k];


    }
    
    printf("Soma: %i",soma);




return 0; 
}