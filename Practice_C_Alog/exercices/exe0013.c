#include <stdio.h>

void main(void)
{
    float sal,cnt1,cnt2,soma,tira;

    printf("digite seu salario:");
    scanf("%f",&sal);
    printf("digite o valor da primeira conta:");
    scanf("%f", &cnt1);
    printf("digite o valor da segunda conta:");
    scanf("%f", &cnt2);
    soma = (cnt1 + cnt1*0.02) + (cnt2 + cnt2*0.02);
    tira = sal - soma;
    printf("%.2f o que sobrou do salario de joao", tira);
}
