#include <stdio.h>

void verifica(int a){

    if (a<0)
    {
        printf("Valor Negativo.\n");
    }
    else
    {
        printf("Valor Positivo.\n");
    }


}

int main(){

    printf("\033[2J\033[H");

    int a;
    printf("Qual o numero? ");
    scanf("%i",&a);

    verifica(a);




return 0;
}