/*  First Class
    Embedded Systems*/

#include <stdio.h>  // Standart IO

// Criando Variaveis Globais
int x,y,z;
int sensor;

// Função Principal
int main(){
    //  Criando Variavel Local
    int a;

    // Recebendo Valor do Usuario
    printf("Digite um valor Inteiro\n");
    scanf("%i",&x);
    printf("\n");

    // Soma
    a = x +2;

    // Mostrando ao Usuario o Valor Final
    printf("Resultado = %i",a);
    printf("\n");

return 0;  
}