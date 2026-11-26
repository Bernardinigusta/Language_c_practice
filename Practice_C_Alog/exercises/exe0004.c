#include <stdio.h>

void main(void){

    float valor,desconto;

    printf("digite o preco atual do produto:");
    scanf("%f", &valor);
    desconto = valor * 0.9;
    printf("O novo valor tido o desconto ficou: %.2f", desconto);
}
