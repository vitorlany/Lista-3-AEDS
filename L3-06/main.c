#include <stdio.h>
#include <stdlib.h>

/*
    6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá se lido do teclado
*/

int main()
{
    float n, s, soma = 0, numerador, denominador, termo;

    printf("Insira o valor de N (max 15): ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++) {
        numerador = i;
        denominador = (n - (i - 1));
        termo = (numerador / denominador);
        if (i % 2 == 0) {
            termo = (termo * (-1));
        }
        soma = soma + termo;
        // Debug
        printf("\nTermo: %.2f", termo, soma);
    }
    printf("\nS = %.2f", soma);

    return 0;
}

/*
    ENTRADA     SAIDA
    3           2.33
    5           3.70
    12          -8.46
*/
