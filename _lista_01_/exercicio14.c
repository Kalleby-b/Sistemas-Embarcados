#include <stdio.h>


int main(){

    printf("\033[2J\033[H");

    printf("Quantos numeros vamos ler?\nDigite aqui: ");
    int quant;
    scanf("%i",&quant);

    int i = 0;
    int maior ,menor, vet[quant];
    
    for ( i = 0; i < quant; i++)
    {
        printf("Digite os numeros Um por vez: ");
        scanf("%i",&vet[i]);
            if(i == 0)
            {
                maior = vet[i];
                menor = vet[i];
                printf("\n");

            }else if(vet[i]>maior && i!=0)
            {
                maior = vet[i];
                printf("\n");

            }else if(vet[i]<menor && i!=0)
            {
                menor = vet[i];
                printf("\n");
            }else
            {
                printf("\n");
            }
            

    }
    
    printf("O maior: %i\nO menor: %i\n",maior,menor);



return 0;
}