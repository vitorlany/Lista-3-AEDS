#include <stdio.h>
#include <stdlib.h>

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
    printf("\nMedia = %.1f", (soma / pos) );

    return 0;
}
