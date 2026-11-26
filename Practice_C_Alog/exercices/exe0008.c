#include <stdio.h>

void main(void){
    float bmr,bmn,h, conta;
    printf("digite a base menor do trapezio:");
    scanf("%f", &bmn);
    printf("digite a base maior do trapezio:");
    scanf("%f", &bmr);
    printf("digite a altura:");
    scanf("%f", &h);
    conta = ((bmn + bmr) * h)/2;
    printf("a area do trapezio: %.2f cm2", conta);


}
