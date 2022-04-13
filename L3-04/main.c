#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    4 – Calcule o valor da seguinte série lido a quantidade de termos:
*/

int main()
{
    float s = 0, f;
    int cont = 0, numero, n = 1, d = 1, sinal = 1;
    printf("Informe um numero: ");
    scanf("%i", &numero);
    while (cont < numero) {
        f = (n / (pow(d, 3) * sinal));
        s = s + f;
        n = 1;
        d = d + 2;
        sinal = (sinal * (-1));
        cont++;
    }
    printf("%f", s);
    return 0;
}
/*
    ENTRADA     SAIDA
    1           1
    2           0.96
*/
