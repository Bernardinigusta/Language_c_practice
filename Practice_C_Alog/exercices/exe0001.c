#include <stdio.h>

void main(void){

    float n1,n2,n3,conta;
    printf("Digite o primeiro numero:");
    scanf("%f", &n1);
    printf("Digite o segundo numero:");
    scanf("%f", &n2);
    printf("digite o terceiro numero:");
    scanf("%f", &n3);
    conta = n1*n2*n3;
    printf("A multiplicacao dos tres numeros e: %.2f", conta);


}
