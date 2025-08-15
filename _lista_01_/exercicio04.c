#include <stdio.h>

int main(){

    printf("\033[2J\033[H");condition
    int k = 1;
    int soma;

    while (k<101)
    {
        soma = soma + k;
        k++;
    }
    printf("A soma de 1 a 100 é : %i\n",soma);

return 0;
}