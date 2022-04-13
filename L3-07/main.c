#include <stdio.h>
#include <stdlib.h>

/*

*/

int main()
{
    int calculo, sobra, novo_numero, propriedade = 0;
    for (int num = 10000; num <= 99999; num++) {
        calculo = num;
        for (int i = 0; i < 5; i++) {
            sobra = calculo % 10;
            calculo = calculo / 10;
            novo_numero = novo_numero + (sobra * (10000 / pow(10, i)));
        }
        if (num == novo_numero) {
            propriedade++;
            printf("\nNumero %i possue essa propriedade", novo_numero);
        }
        novo_numero = 0;
        sobra = 0;
        calculo = 0;
    }
    printf("\n\n%i numeros possuem essa propiedade!", propriedade);
    return 0;
}

/*
    ENTRADA     SAIDA
                900
*/
