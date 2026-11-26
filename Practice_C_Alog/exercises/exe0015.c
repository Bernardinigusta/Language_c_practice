#include <stdio.h>

void main(void){

    float convert,celsius;
    printf("digite a temperatura |Celsius|:");
    scanf("%f", &celsius);
    convert = celsius * 1.8 + 32;
    printf("O valor em Fahrenheit: %.2f", convert);

}
