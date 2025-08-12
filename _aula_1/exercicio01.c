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

        /*Parte Inacabada
    char aniversario;
    char s ="s";

    printf("\nJá fez aniversário esse ano (1/0):\n");
    scanf("%c",&aniversario);

    if(aniversario == s){
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
    */

    //Mostrando Informações na Tela
        printf("\nSua Idade Atual:%i\n",idade);
        printf("\nSua idade em 2050:%i\n",idade_futura);
        
return 0;
}