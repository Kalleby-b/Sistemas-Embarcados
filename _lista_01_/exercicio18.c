#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int valor;
    
    printf("Digite o valor: ");
    scanf("%i",&valor);

    int fatorial = valor;
    for (int i = 1; i < valor; i++)
    {
     fatorial = i*fatorial ;
    }
    

    printf("\nO fatorial é: %i\n",fatorial);
    

return 0;
}