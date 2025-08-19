#include <stdio.h>

double pot(double x, double y ){
    double temp = x;
    if (y == 1)
    {
        return x;
    }
    else
    {
         for (int k = 1; k <= (y-1); k++)
        {
            temp = x*temp;
        }
        return temp;
    }

   
}


int main(){

    float i = 0.0759;
    int c = 1000;
    float montante;

    montante = c*pot((i+1),12);

    printf("O valor em 1 ano: %.2f\n",montante);
    

    int time;
    printf("Qual é o periodo a ser estudado em meses? ");
    scanf("%i",&time);

    printf("|_______Tabela de Rendimentos______|\n");
    printf("|   Juros do Mês    |   Montante   |\n");
    

    for (int j = 1; j <= time; j++)
    {
        montante = c*pot((1+i),j);
        float juros = montante - c;
        printf("|      %.2f      |   %.2f     |\n",juros,montante);
    
    }
    
    
    

    



return 0;
}