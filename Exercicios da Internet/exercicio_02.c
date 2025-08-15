/*
Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/

#include <stdio.h>

int main(){

    int a = 10;
    int k = 0;
    int r;

    while(k<=a){
        r = k*9;
        printf("9 x %i =",k);
        printf("%i\n",r);
        k =k+1;
    }

    printf("\033[2J\033[H");

return 0;
}