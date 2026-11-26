#include <stdio.h>

void main(void){
    float kg,g;
    printf("digite seu peso em Kg:");
    scanf("%f", &kg);
    g = kg * 1000;
    printf("O seu peso em gramas: %.2f g", g);

}
