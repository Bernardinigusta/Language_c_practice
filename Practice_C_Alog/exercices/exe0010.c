#include <stdio.h>

void main(void){
    float d1,d2,cont;
    printf("digite o tamanho da diagonal maior:");
    scanf("%f", &d1);
    printf("digite o tamanho da diagonal menor:");
    scanf("%f", &d2);
    cont =  (d1*d2)/2;
    printf("a area do losango : %.2f cm2", cont);

}

