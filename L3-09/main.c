#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    9. Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0 –
    cara e 1 – para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.
    (utilize o comando - para que o computador escolha o resultado).
*/

int main()
{
    int moeda, res = 0, certa = 0, errada = 0;

    printf("Cara (0) ou Coroa? (1): ");
    scanf("%i", &moeda);
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {

        res = (rand()%2);
        printf("\n%i", res);
        if (res == moeda) {
            certa++;
        } else {
            errada++;
        }
    }

    printf("Certas: %i\nErradas: %i", certa, errada);
    return 0;
}
/*
    ENTRADA     SAIDA
    1           6, 4
    0           7, 3
*/
