#include <stdio.h>

void main(void){

    float AnoAtual,AnoNascimento,ano,mes,semana,dia;

    printf("Ano atual:");
    scanf("%f", &AnoAtual);
    printf("Ano de nascimento:");
    scanf("%f", &AnoNascimento);
    ano = AnoAtual - AnoNascimento;
    mes = ano*12;
    semana = mes*4.3;
    dia = semana*7;
    printf("Anos :%.1f\n", ano);
    printf("Meses:%.1f\n", mes);
    printf("Semanas:%.1f\n", semana);
    printf("Dias:%.1f", dia);


}
