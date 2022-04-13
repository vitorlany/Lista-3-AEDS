#include <stdio.h>
#include <stdlib.h>

/*
    1 - Fa�a um algoritmo que leia um conjunto de n�meros (X) e imprima a quantidade de n�meros pares
    (QPares) e a quantidade de n�meros impares (QImpares) lidos. Admita que o valor 9999 � utilizado como
    sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3
*/

int main()
{
    int num_inserido, i, j, inspecionado;
    int par = 0, impar = 0;
    int lista[100];

    printf("Utilize 9999 como flag\n");

    for (i = 0; num_inserido != 9999; i++) {

        printf("\nInsira o valor:");
        scanf("%i", &num_inserido);

        if (num_inserido != 9999) { // != Flag
            lista[i] = num_inserido;
            printf("Valor %i inserido na lista\n", lista[i]);
        } else {
            break;
        }
    }

    for (j = 0; j != i; ++j) {
        inspecionado = lista[j];
        if (inspecionado % 2 == 0) {// par
            //Debug  printf("\nPar -> %i", inspecionado);
            par++;
        }
        if (inspecionado % 2 != 0) { // impar
            //Debug  printf("\nImpar -> %i", inspecionado);
            impar++;
        }
    }

    printf("\nValores encontrados \nPar: %i\nImpar: %i", par, impar);

    return 0;
}
/*
    ENTRADA     SAIDA
    1,2,3,4     2,2
    2,2,4,3     3,1
*/
