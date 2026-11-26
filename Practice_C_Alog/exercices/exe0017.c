#include <stdio.h>

void main(void){

    float salmin,salRcb,ht,het,salbruto,tothet,nht,nhet;

    printf("Digite o valor do salario minimo:");
    scanf("%f",&salmin);
    printf("Digite o numero de Horas trabalhadas:");
    scanf("%f", &nht);
    printf("Digite o numero de Horas extras trabalhadas:");
    scanf("%f", &nhet);
    ht = salmin/8;
    het = salmin/4;
    salbruto = nht * ht;
    tothet = nhet * het;
    salRcb = salbruto + tothet;
    printf("O salario a receber corresponde a R$%.2f", salRcb);



}
