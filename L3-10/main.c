#include <stdio.h>
#include <stdlib.h>

/*
    10. Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao
    final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo
    usuário em no máximo 10 tentativas!
*/

int main()
{
    int numero, min, max, aleatorio, resposta, tentativas, acertou;

    printf("Insira um numero entre 1 e 1023: ");
    scanf("%i", &numero);

    max = 1023;
    min = 1;
    acertou = 0;
    tentativas = 0;

    for (tentativas = 0; (tentativas < 10 && (!(acertou))); tentativas++) {
        aleatorio = (rand() % max + min);

        printf("\nNumero gerado: %i", aleatorio);
        printf("\nO numero esta \n> - (1) \n< - (2) \n= - (3) ?");
        scanf("%i", &resposta);

        switch(resposta) {
        case 1: // >
             max = aleatorio;
            break;
        case 2: // <
            min = aleatorio;
            break;
        case 3: // =
            acertou = 1;
            break;
        }
    }

    printf("Foram usadas %i tentativas e o numero %s acerto", tentativas, (acertou)? "foi":"nao foi");

    return 0;
}

/*
    ENTRADA     SAIDA
    5,1,1,3     3,1
    30,1,3      2,1
    2,1,1,1...  10,0
*/
