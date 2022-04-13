#include <stdio.h>
#include <stdlib.h>

/*
    5 - A s�rie de fibonacci � formada pela seq��ncia:
    1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    Escreva um algoritmo que pe�a um n�mero N maior que 2. Gere e imprima a s�rie at� este n-�simo
    termo.
*/

int main()
{
    int termo, proximo, ultimo, penultimo;

    printf("Insira n termo maior que 2: ");
    scanf("%i", &termo);

    if (termo <= 2) {
        printf("Insira um termo > 2");
    } else {
        ultimo = 1;
        penultimo = 0;

        printf("Fibonacci: %i, %i", penultimo, ultimo);

        for (int i = 2; i < termo; i++) {
            proximo = ultimo + penultimo;
            penultimo = ultimo;
            ultimo = proximo;
            printf(", %i", proximo);
        }
    }

    return 0;
}

/*
    ENTRADA     SAIDA
    10          0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    11          0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    2           Error
*/
