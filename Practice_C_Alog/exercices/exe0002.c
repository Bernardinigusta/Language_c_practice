#include <stdio.h>

void main(void){

    float n1,n2, media;
    printf("digite a nota 1:");
    scanf("%f", &n1);
    printf("digite a nota 2:");
    scanf("%f", &n2);
    media = (n1 + n2)/2;
    printf("a media do aluno e  %.2f", media);

}
