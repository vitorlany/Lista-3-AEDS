#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inserido = 0, lista[100];
    int i;

    printf("Utilize -1 como flag\n");
    for (i = 0; 1; i++) {
        printf("\nInsira o valor:");
        scanf("%f", &inserido);

        if (inserido != -1) {
            printf("Valor inserido: %.1f \n", inserido);
            lista[i] = inserido;
        } else {
            printf("Flag reconhecida!");
            break;
        }
    }



    return 0;
}
