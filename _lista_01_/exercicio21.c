#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int idade;
    char sexo[10];
    
    printf("Digite o sexo do candidato(F ou M): ");
    scanf("%c",sexo);

    printf("\nQual a idade? ");
    scanf("%i",&idade);

    char obj[2] = "F" ;

    if (sexo[0]==obj[0] && idade<25)
    {
        printf("\nCandidata Valida!");
    }
    else
    {
        printf("\nCandidato(a) não se aplica a vaga");
    }
    
    

return 0;
}