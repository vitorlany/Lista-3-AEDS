#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    8 - O numero 3025 possui a seguinte característica:
    30 + 25 = 55
    55^2 = 3025
    Quantos e quais são os números de 4 dígitos possuem essa característica?
*/

int main()
{
    int num = 1000, calculo, resultado = 0;
    while (num <= 9999){
        calculo = pow(((num / 100) + (num % 100)), 2);
        if (calculo == num) {
            resultado++;
            printf("O numero %i tem a propriedade \n", calculo);
        }
        num++;
    }
    printf("Numeros com a propiedade: %i", resultado);

    return 0;
}

/*
    ENTRADA     SAIDA
                3
*/
