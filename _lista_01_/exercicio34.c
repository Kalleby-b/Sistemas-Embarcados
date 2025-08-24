#include <stdio.h>

int verificador(int a){


    if (a == 0)
    {
        printf("É nulo\n");
    }
    else
    {
        printf("Não é nulo\n");
    }
return 0;
}

int main(){

    printf("\033[2J\033[H");

    int v;
    printf("Qual o valor? ");
    scanf("%i",&v);

    verificador(v);


return 0;
}