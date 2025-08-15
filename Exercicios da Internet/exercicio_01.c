/*Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

#include <stdio.h>

float metros,cent,deci,mili;

int main(){

    printf("\033[2J\033[H");
    printf("Digite o valor em metros: ");
    scanf("%f",&metros);
    deci = metros*10;
    cent = metros*100;
    mili = metros*1000;
    
    printf("Valor em Decimetros: %.2f\n",deci);
    printf("Valor em Centimetros: %.2f\n",cent);
    printf("Valor em Milimetros: %.2f\n",mili);

    printf("Digite Enter Para Limpar...");
    getchar();
    getchar();
    printf("\033[2J\033[H");

return 0;
}