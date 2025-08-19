#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int valor[12], i;
    int par = 0;
    int impar = 0;

    for ( i = 0; i < 12; i++)
    {
        printf("Digite o valor: ");
        scanf("%i",&valor[i]);
            if((valor[i]%2 == 0))
            {
                par++;
            }
            else
            {
                impar++;
            }
    }
    
    printf(" você digitou:\n%i numeros pares\n%i numeros impares",par,impar);






return 0;   
}