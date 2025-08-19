#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    
    int fim;
    printf("Digite onde sera o fim da Serie: ");
    scanf("%i",&fim);

    float serie = 1;
    for (float i = 2; i <= fim; i++)
    {
        serie = serie + (1/i);
    }

    printf("\nResultado: %f\n",serie);
    
    
    
    
    

return 0;
}