#include <stdio.h>

int main(){

    printf("\033[2J\033[H");
    float peso;
    int escolha;


    printf("Digite o seu peso: ");
    scanf("%f",&peso);

    printf("Agora escolha um planeta:\n(1) - Mercúrio\n(2) - Vênus\n(3) - Marte\n(4) - Júpiter\n(5) - Saturno\n(6) - Urano\nDigite: ");
    scanf("%i",&escolha);

    switch (escolha)
    {
    case 1: 
        peso = peso*0.37; 
        printf("Seu peso em Mercúrio: %.2f",peso);
    break;
    
    case 2: 
        peso = peso*0.88; 
        printf("Seu peso em Vênus: %.2f",peso);
    break;
    
    case 3: 
        peso = peso*0.38; 
        printf("Seu peso em Marte: %.2f",peso);
    break;
    
    case 4: 
        peso = peso*2.64; 
        printf("Seu peso em Júpiter: %.2f",peso);
    break;
    
    case 5: 
        peso = peso*1.15; 
        printf("Seu peso em Saturno: %.2f",peso);
    break;
    
    case 6: 
        peso = peso*1.17; 
        printf("Seu peso em Urano: %.2f",peso);
    break;  
    
    default: 
        printf("ERRO!!!"); 
    break;
    }

    



return 0;
}