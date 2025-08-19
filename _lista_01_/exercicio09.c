#include <stdio.h>

int main(){

    printf("\033[2J\033[H");
    int quant;
    printf("Quantos numeros vamos ler?");
    scanf("%i",&quant);

    int i = 0;
    int k = 0;
    int vet[quant];

    for(k = 0;k<quant;k++)
    {
        vet[k] = 0;
    }

    while (i<quant)
    {
        printf("| Valor Lido | Dobro do valor lido |\n");
        if(i == 0){
            for ( k = 0; k < quant; k++)
            {
            printf("|     %i     |          %i         |\n",0,0);
            }
        }else{
            for ( k = 0; k < quant; k++)
            {
            printf("|     %i     |          %i         |\n",vet[k],(vet[k]*2));
            }
        }
        
        printf("\nDigite o valor: ");
        scanf("%i",&vet[i]);

        i++;
        printf("\033[2J\033[H");

    }
    
    printf("| Valor Lido | Dobro do valor lido |\n");
    for ( k = 0; k < quant; k++)
        {
            printf("|     %i     |          %i         |\n",vet[k],(vet[k]*2));
        }



return 0;
}