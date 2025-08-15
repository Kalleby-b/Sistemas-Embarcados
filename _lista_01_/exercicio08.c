#include <stdio.h>

int main(){

    printf("\033[J2\033[H");

    float n1 = 1.5;
    float n2 = 1.1;
    int dia;

    while (n1>=n2)
    {
        n1 = n1+ 0.02;
        n2 = n2+ 0.03;
        dia++;
    }
    
    
    printf("Irá demorar %i dias para que o segundo reservatório ultrapasse o primeiro.\n\n",dia);


return 0;    
}