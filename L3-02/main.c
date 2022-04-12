#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, lista[15];
    int pos = 0;

    printf("Cuidado!!! Flag = -1\n");

    while (1) {
        printf("Insira um valor: ");
        scanf("%f", &valor);
        if (valor != -1) {
            printf("Valor inserido: %.1f\n\n", valor);
            lista[pos] = valor;
            pos++;
        } else {
            break;
        }
    }

    int tamanho_da_lista = pos;
    printf("Tamanho da lista: %i", pos);

    return 0;
}
