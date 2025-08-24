#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int vetor[10];

    for (int k = 0; k < 10; k++)
    {
        printf("Digite o %iº valor: ",k+1);
        scanf("%i",vetor[k]);
    }

    int maior,menor;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            maior = vetor[i];
            menor = vetor[i];
        }
        else if (vetor[i]>maior)
        {
            maior = vetor[i];
        }
        else if (vetor[i]<menor)
        {
            menor = vetor[i];
        }
        
    }

    printf("O maior é: %i\nO menor é: %i",maior,menor);
    

return 0;
}