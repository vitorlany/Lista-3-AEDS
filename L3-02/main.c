#include <stdio.h>
#include <stdlib.h>


/*
    2 - Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o
    menor e a média aritmética desse conjunto de dados. (Flag -1).
    Execute este programa para os seguintes valores
*/
int main()
{
    float vetor[15];
    int pos = 0;

    while(1){
        printf("Insira um valor: ");
        scanf("%f", &vetor[pos]);
        if(vetor[pos] == -1) {
            break;
        }
        pos++;
    }
    pos--;

    float menor = vetor[0];
    float maior = 0;

    for(int i = 0; i <= pos; i++) {
        //printf("MAIOR - %f %f\n", vetor[i], maior);
        if(vetor[i] > maior) {
            maior = vetor[i];
        }

        //printf("MENOR - %f %f\n", vetor[i], menor);
        if(menor > vetor[i]){
          menor = vetor[i];
        }
    }

    float soma = 0;

    for (int j = 0; j <= pos; j++) {
        soma = soma + vetor[j];
    }

    printf("\nMaior = %.1f", maior);
    printf("\nMenor = %.1f", menor);
    printf("\nMedia = %.1f", (soma / (pos + 1)));

    return 0;
}

/*
    ENTRADA     SAIDA
    1.1,2,3,-1  3,1.1,2
    2.3,2,1,-1  2.3,1,1.8
    3.1,3,2,-1  3.1,2,2.7
*/
