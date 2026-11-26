#include <stdio.h>

void main(void){

    float peso, maior, menor;
    printf("digite seu peso atual:");
    scanf("%f", &peso);
    maior = peso * 1.15;
    menor = peso * 0.80;
    printf("engordou, seu peso: %.2f KG \n", maior);
    printf("emagreceu, seu peso: %.2f KG", menor);

}
