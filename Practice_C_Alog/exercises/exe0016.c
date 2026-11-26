#include <stdio.h>

void main(void){

    float potencia,volume,x,y,z;
    printf("digite a altura do comodo |metros|: ");
    scanf("%f", &x);
    printf("digite a largura do comodo |metros|: ");
    scanf("%f", &y);
    printf("digite o comprimento do comodo |metros|:");
    scanf("%f", &z);
    volume = x*y*z;
    potencia = 18 * volume;
    printf("Para iluminar |%.2f M3| precisa de |%.2f W|", volume,potencia);


}
