#include <stdio.h>

int ano,mes,dia;

int main(){


    printf("\033[2J\033[H");
    printf("Digite o ano: ");
    scanf("%i",&ano);
    printf("Digite o mes: ");
    scanf("%i",&mes);
    printf("Digite o dia: ");
    scanf("%i",&dia);

    int a = ano - 1900;
    int b;

    if((ano%4) == 0 && dia<29 && mes<=2){
        b = (a/4) -1;
    }
    else{
        b = a/4;
    }

    int var1;

    switch (mes)
    {
    case 1: var1 = 0; break;
    case 2: var1 = 3; break;
    case 3: var1 = 3; break;
    case 4: var1 = 6; break;
    case 5: var1 = 1; break;
    case 6: var1 = 4; break;
    case 7: var1 = 6; break;
    case 8: var1 = 2; break;
    case 9: var1 = 5; break;
    case 10: var1 = 0; break;
    case 11: var1 = 3; break;
    case 12: var1 = 5; break;
    default:
        printf("Valor Invalido");
        break;
    }

    dia--;

    int soma = a+b+var1+dia;

    int resto = soma%7;
    
    if(resto == 0){
        printf("Você nasceu na Segunda-feira");
    }else if(resto == 1){
        printf("Você nasceu na Terça-feira");
    }else if(resto == 2){
        printf("Você nasceu na Quarta-feira");
    }else if(resto == 3){
        printf("Você nasceu na Quinta-feira");
    }else if(resto == 4){
        printf("Você nasceu na Sexta-feira");
    }else if(resto == 5){
        printf("Você nasceu no Sabado");
    }else{
        printf("Você nasceu no Domingo");
    }




return 0;
}