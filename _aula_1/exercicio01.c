/*
Fazer Um Programa em C que o usr informa o ano Atual e o Ano de nascimento de uma pessoa e 
retorna a idade hoje e a idade em 2050
*/

#include <stdio.h> // Standart IO

int ano,nascimento; //Variaveis para o Ano atual e ano de nascimento

int main(){
    //Recolhendo os Dados do Usuario
    printf("\nDigite o Ano Atual:\n");
    scanf("%i",&ano);
    printf("\nDigite o seu ano de nascimento:\n");
    scanf("%i",&nascimento);

    int idade,idade_futura;//Variaveis Para o calculo de idade

    // Realizando o Calculo
    idade = ano - nascimento;
    idade_futura = 2050 - nascimento;

    char aniversario[3];
    char nao[3] = "n";

    printf("\nJá fez aniversário esse ano (S/n):\n");
    scanf("%s",aniversario);


    if(aniversario[1] == nao[1]){
        //Mostrando Informações na Tela
        idade = idade - 1;
        printf("\nSua Idade Atual:%i\n",idade);
        printf("\nSua idade em 2050:%i\n",idade_futura);
    }

    else{

        //Mostrando Informações na Tela
        printf("\nSua Idade Atual:%i\n",idade);
        printf("\nSua idade em 2050:%i\n",idade_futura);

    }
    
    printf("Digite Enter para continuar...");
    getchar();
    getchar();
        
        
return 0;
}