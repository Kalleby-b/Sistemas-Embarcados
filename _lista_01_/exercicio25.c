#include <stdio.h>



int main(){

    printf("\033[2J\033[H");

    int i = 0;
    int numeros[10];
    printf("Digite o numero:\n");
    while (i<10)
    {
        scanf("%i",&numeros[i]);
        printf("\n");
        i++;
    }
    
    printf("numeros digitados:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%i\n",numeros[i]);
    }
    






return 0;    
}