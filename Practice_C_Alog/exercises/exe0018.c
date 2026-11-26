#include <stdio.h>

void main(void){

    float a1,a2,a3;

    printf("digite o primeiro angulo do triangulo:");
    scanf("%f", &a1);
    printf("digite o segundo angulo do triangulo:");
    scanf("%f", &a2);
    a3 = 180 - (a1 + a2);
    printf("o valor do terceiro angulo corresponde a %.2f Graus", a3);
}
