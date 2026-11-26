#include <stdio.h>

void main(void){

    int entrada,pt,pst,st,ptt,tt,qt, conta;

    printf("digite um inteiro de 4 algarismos:");
    scanf("%i", &entrada);
    pt = entrada / 1000;
    pst = entrada % 1000;
    st = pst / 100;
    ptt = pst % 100;
    tt = ptt / 10;
    qt = ptt % 10;
    conta = qt * 1000 + tt * 100 + st * 10 + pt;
    printf("O inverso do valor corresponde a %i ", conta);

}
