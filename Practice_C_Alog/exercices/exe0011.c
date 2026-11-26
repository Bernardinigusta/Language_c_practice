#include <stdio.h>

void main(void){

    float salmin,func, conta;
    printf("digite seu salario:");
    scanf("%f", &func);
    printf("digite o valor do salario minimo:");
    scanf("%f", &salmin);
    conta = func/salmin;
    printf("corresponde %.4f salarios minimos ", conta);


}
