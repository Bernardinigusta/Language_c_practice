#include <stdio.h>

void main(void){
    float nota1, nota2, media;

    printf("digite a primeira nota:");
    scanf("%f", &nota1);
    printf("digite a segunda nota:");
    scanf("%f", &nota2);
    media =  ((nota1*2)+(nota2*3))/5;

    printf("a media ponderada e: %.2f", media);
}
