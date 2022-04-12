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

    int menor = 0;
    int maior = 0;

    for(int i = 0; i <= pos; i++) {
        printf("MAIOR - %f %f\n", vetor[i], maior);
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        printf("MENOR - %f %f\n", vetor[i], menor);
        if(vetor[i] < menor ){
          menor = vetor[i];
        }
    }

    printf("\no maior valor e %d", maior);
    printf("\no menor valor e %d", menor);


    return 0;
}
