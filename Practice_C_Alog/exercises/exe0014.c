#include <stdio.h>

void main(void){

    float raio,comp,area,volume;

    printf("digite o raio da esfera cm:");
    scanf("%f",&raio);
    comp = (2*3.14)*raio;
    area = (raio*raio) * 3.14;
    volume = (((raio*raio*raio)*3.14)/3)*4;
    printf("comprimento da esfera: %.2f cm\n", comp);
    printf("area da esfera: %.2f  cm2\n", area);
    printf("volume da esfera: %.2f cm3", volume);


}
