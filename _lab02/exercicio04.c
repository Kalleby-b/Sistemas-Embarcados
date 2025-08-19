#include <stdio.h>


int main(){

    printf("\033[2J\033[H");

    int mensagem[5],paridade;

    printf("Informe a mensagem: ");


    for (int i = 0; i < 5; i++)
    {
        mensagem[i] = getchar() -48;
    }
    

    printf("Qual é a configuração de paridade?\n1- Par\n2 - Impar\nDigite aqui: ");
    scanf("%i",&paridade);

    int cont = 0;

    if (paridade == 1)
    {
        for (int k = 0; k < 4; k++)
        {
            if (mensagem[k] == 1)
            {
                cont++;
            }
        }
        
        if ((cont%2) != 0 )
        {
            printf("Seu bit de paridade é 1");
        }
        else
        {
            printf("Seu bit de paridade é 0");
        }

    }
    else
    {
        
        for (int k = 0; k < 4; k++)
        {
            if (mensagem[k] == 1)
            {
                cont++;
            }
        }
        
        if ((cont%2)==0 )
        {
            printf("Seu bit de paridade é 1");
        }
        else
        {
            printf("Seu bit de paridade é 0");
        }

    }
        




return 0;
}