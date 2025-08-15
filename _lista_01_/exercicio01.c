#include <stdio.h>

int main(){
    int a,b;
    printf("\033[2J\033[H");
    printf("Digite o primeiro numero: ");
    scanf("%i",&a);
    printf("\nDigite o segundo numero: ");
    scanf("%i",&b);

    int soma = a+b;

    printf("A soma é: %i \n",soma);

return 0;    
}