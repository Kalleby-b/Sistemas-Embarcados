#include <stdio.h>

int main(){
    float a,b,resultado;
    char op[2];

    printf("\033[2J\033[H");
    printf("Digite o primeiro numero: ");
    scanf("%f",&a);
    printf("Digite o segundo numero: ");
    scanf("%f",&b);

    printf("  Qual será a operação?\n  (a) - Soma\n  (b) - Subtração\n  (c) - Divisão\n  (d) - Multiplicação\n  Digite Aqui: ");
    getchar();
    op[1] = getchar(); 

   

    char opa[] = "abcd";


    if(op[1] == opa[0]){
        resultado = a+b;
        printf("Resultado: %.2f\n",resultado);
    }else if(op[1] == opa[1]){
        resultado = a-b;
        printf("Resultado: %.2f\n",resultado);
    }else if(op[1] == opa[2]){
        resultado = a / b;
        printf("Resultado: %.2f\n",resultado);
    }else if(op[1] == opa[3]){
        resultado = a*b;
        printf("Resultado: %.2f\n",resultado);
    }else{
        printf("Operação Inválida!!");
    }

return 0;    
}