#include <stdio.h>

void main(void){

    float acumul,maior,menor = 2000,matriz[12],media,acima,abaixo;
    int cont,cont2;

    for(cont = 0; cont < 12; cont++){

        printf("\ndigite o %io valor de UV:", cont +1);
        scanf("%f", &matriz[cont]);
        acumul = acumul + matriz[cont];
        printf("%f", matriz[cont]);

        if(maior < matriz[cont])
        {
            maior = matriz[cont];
        }

        if(matriz[cont] < menor)
        {
            menor = matriz[cont];
        }

    }
    media = acumul/cont;


    for(cont2 = 0; cont2 < 12; cont2++){

       if(matriz[cont2] < media)
       {
           abaixo++;
       }
       if(matriz[cont2] > media)
       {
           acima++;
       }
    }
       printf("\n Media das leituras:%.2f\n Elementos abaixo:%.2f\n Elementos acima:%.2f\n A maior leitura:%.2f\n A menor leitura:%.2f", media,abaixo,acima,maior,menor);


}
