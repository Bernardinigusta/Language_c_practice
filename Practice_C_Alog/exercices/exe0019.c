#include <stdio.h>

void main(void){

    int horas,minutos, horamin, totmin,totsec;

    printf("digite o campo das horas:");
    scanf("%i", &horas);
    printf("digite o campo de minutos:");
    scanf("%i", &minutos);
    horamin = horas * 60;
    totmin = minutos + horamin;
    totsec = totmin*60;
    printf("a hora digitada convertida em minutos:%i \n", horamin);
    printf("o total dos minutos:%i \n", totmin);
    printf("o total dos minutos convertidos em segundos:%i",totsec);



}
