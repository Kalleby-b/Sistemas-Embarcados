#include <stdio.h>

int main(){

    int i = 1;
    printf("\033[2J\033[H");
    int vet[15];
    printf("Digite os 15 numeros: \n");


    while (i<=15)
    {
        scanf("%i",&vet[i]);
        i++;
    }

    int quant = 0;
    int k = 0;
    for (k = 0; k <= 15; k++)
    {
        if (vet[k]> 30)
            quant++;
     
    }
    
    printf("\n%i, são maiores que 30.",quant);


return 0;
}