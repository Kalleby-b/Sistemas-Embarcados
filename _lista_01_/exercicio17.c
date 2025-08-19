#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int topo;
    int soma = 0;
    printf("Digite o valor Topo: ");
    scanf("%i",&topo);

    printf("Os numeros impares até %i:\n",topo);
    for (int i = 1; i <= topo; i++)
    {
        if ((i%2) != 0)
        {
            printf("%i, ",i);
            soma = soma + i;
        }
        
    }
    printf("\nSoma desses numeros: %i\n",soma);

    
    

return 0;
}