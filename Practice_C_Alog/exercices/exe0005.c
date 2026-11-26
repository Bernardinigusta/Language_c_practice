#include <stdio.h>

void main(void){

    float salario,comicao,conta1;
    printf("digite seu salario:");
    scanf("%f", &salario);
    printf("digite suas vendas:");
    scanf("%f",&comicao);
    conta1 = salario + (comicao * 0.04);
    printf("O valor final do salario: %.2f", conta1);
}
