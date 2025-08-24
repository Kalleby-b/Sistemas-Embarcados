#include <stdio.h>

int soma(int a, int b){

    return (a+b);

}

int main(){

    printf("\033[2J\033[H");

    int a,b;

    printf("Qual é o primeiro numero? ");
    scanf("%i",&a);
    printf("Qual é o segundo numero? ");
    scanf("%i",&b);

    printf("A soma é: %i\n",soma(a,b));





return 0;
}