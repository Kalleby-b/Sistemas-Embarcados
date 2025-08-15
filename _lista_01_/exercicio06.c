#include <stdio.h>

int main(){

    printf("\033[2J\033[H");
    int i = 0;
    int vet2[5];

  
    while (i<5)
    {
        printf("Digite o numero: ");
        scanf("%i",&vet2[i]);
        printf("\n");
        i++;
    }

    int k;
    int quant2 = 0;
    for ( k = 0; k < 5; k++)
    {
        printf("%i\n",vet2[k]);
        if (vet2[k]<0)
        {
            quant2 = quant2+1;
        }
        
    }
    
    printf("%i, são negativos\n\n",quant2);



return 0;    
}