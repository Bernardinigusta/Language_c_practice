#include <stdio.h>

void main(void){
    int entrada,pegamin,hora,min,pegasec,sec,conta;

    printf("digite o valor de entrada:");
    scanf("%i", &entrada);
    hora = entrada / 10000;
    pegamin = entrada % 10000;
    min = pegamin / 100;
    sec = min % 100;

    conta = (hora * 3600) + (min * 60) + sec;


    printf("%i segundos", conta);

}
