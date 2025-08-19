#include <stdio.h>


int main(){

    printf("\033[2J\033[H");

    
    int classe;
    float l,p;
        
    printf("Qual a classe do comodo?(1,2 ou 3)\n");
    scanf("%i",&classe);
    

    printf("Digite a primeira dimensão: ");
    scanf("%f",&l);
    printf("Digite a segunda dimensão: ");
    scanf("%f",&p);

    float area = l*p;

    switch (classe)
    {
    case 1:
        
        printf("Seu ambiente tem %.2f m\u00B2 e precisa de %.2f lampadas",area,((area*15)/60));
        break;
    
    case 2:

        printf("Seu ambiente tem %.2f m\u00B2 e precisa de %.2f lampadas",area,((area*18)/60));
        break;

    default:

        printf("Seu ambiente tem %.2f m\u00B2 e precisa de %.2f lampadas",area,((area*20)/60));
        break;
    }



return 0;
}