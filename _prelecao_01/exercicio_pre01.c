// Verificador de CPF

#include <stdio.h>

char cpf[12];


//função principal
int main(){
    
    printf("\033[2J\033[H");
    printf("Digite seu cpf: ");
    scanf("%s",cpf);

    int k = 10;
    int soma = 0;
    int i = 0;

    for(i=0;i<9;i++){
        soma = soma + (cpf[i]-48)*k;
        k--;
    }

    int d1 = soma % 11;

    if(d1<2){
        d1 = 0;
    }
    else{
        d1 = 11-d1;
    }
    // digito 2
    int soma2 = 0;
    k = 11;
    i = 0;
    cpf[9] = d1;
    for(i=0;i<11;i++){
        soma2 = soma2 + (cpf[i]-48)*k;
        k--;
    }

    int d2 = soma2 % 11;

    if(d2<2){
        d2 = 0;
    }
    else{
        d2 = 11-d2;
    }

    printf("dois ultimos digitos: %i",d1);
    printf("%i\n",d2);

   

return 0;

}