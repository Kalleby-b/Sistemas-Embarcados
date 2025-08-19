#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int valor;
    printf("Digite o valor: ");
    scanf("%i",&valor);

    int i = valor;

    printf("O valor é divisivel por: \n");
    while (i>0)
    {
        if((valor%i) == 0)
        {
            printf("%i\n",i);
        }
        i--;

    }
    
    

return 0;
}