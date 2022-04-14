#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ex01(), ex02(), ex03(), ex04(), ex05(), ex06(), ex07(), ex08(), ex09(), ex10();

int main()
{
    int exercicio;
    do {
        printf("\n\nEscolha um exercicio: ");
        printf("\n\
        1 - Exercicio 1\n\
        2 - Exercicio 2\n\
        3 - Exercicio 3\n\
        4 - Exercicio 4\n\
        5 - Exercicio 5\n\
        6 - Exercicio 6\n\
        7 - Exercicio 7\n\
        8 - Exercicio 8\n\
        9 - Exercicio 9\n\
        10 - Exercicio 10\n\
        11 - Fechar\n\
Escolha: ");
        scanf("%i", &exercicio);
        switch(exercicio){
        case 1:
            ex01();
            break;

        case 2:
            ex02();
            break;

        case 3:
            ex03();
            break;

        case 4:
            ex04();
            break;

        case 5:
            ex05();
            break;

        case 6:
            ex06();
            break;

        case 7:
            ex07();
            break;

        case 8:
            ex08();
            break;

        case 9:
            ex09();
            break;

        case 10:
            ex10();
            break;
        }
    }while(exercicio != 11);
    return 0;
}

/*
    1 - Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
    (QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como
    sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3
*/

void ex01() {
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

    /*
    ENTRADA     SAIDA
    1,2,3,4     2,2
    2,2,4,3     3,1
    */
}

/*
    2 - Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o
    menor e a média aritmética desse conjunto de dados. (Flag -1).
    Execute este programa para os seguintes valores
*/

void ex02() {
    float vetor[15];
    int pos = 0;

    while(1){
        printf("Insira um valor: ");
        scanf("%f", &vetor[pos]);
        if(vetor[pos] == -1) {
            break;
        }
        pos++;
    }
    pos--;

    float menor = vetor[0];
    float maior = 0;

    for(int i = 0; i <= pos; i++) {
        //printf("MAIOR - %f %f\n", vetor[i], maior);
        if(vetor[i] > maior) {
            maior = vetor[i];
        }

        //printf("MENOR - %f %f\n", vetor[i], menor);
        if(menor > vetor[i]){
          menor = vetor[i];
        }
    }

    float soma = 0;

    for (int j = 0; j <= pos; j++) {
        soma = soma + vetor[j];
    }

    printf("\nMaior = %.1f", maior);
    printf("\nMenor = %.1f", menor);
    printf("\nMedia = %.1f", (soma / (pos + 1)));
    /*
    ENTRADA     SAIDA
    1.1,2,3,-1  3,1.1,2
    2.3,2,1,-1  2.3,1,1.8
    3.1,3,2,-1  3.1,2,2.7
    */
}

/*
    3 - Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um número lido do teclado.
*/

void ex03() {
    printf("Verifique a pasta L3-03");
}

/*
    4 – Calcule o valor da seguinte série lido a quantidade de termos:
*/

void ex04() {
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
    /*
    ENTRADA     SAIDA
    1           1
    2           0.96
    */
}

/*
    5 - A série de fibonacci é formada pela seqüência:
    1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este n-ésimo
    termo.
*/

void ex05() {
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

    /*
    ENTRADA     SAIDA
    10          0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    11          0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
    2           Error
    */
}

/*
    6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá se lido do teclado
*/

void ex06(){
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

    /*
        ENTRADA     SAIDA
        3           2.33
        5           3.70
        12          -8.46
    */
}

/*
    7 - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita
    tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números
    palíndromos de 10000 a 99999.
*/

void ex07(){
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
    /*
    ENTRADA     SAIDA
                900
    */
}

/*
    8 - O numero 3025 possui a seguinte característica:
    30 + 25 = 55
    55^2 = 3025
    Quantos e quais são os números de 4 dígitos possuem essa característica?
*/

void ex08(){
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

    /*
    ENTRADA     SAIDA
                3
    */
}

/*
    9. Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0 –
    cara e 1 – para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.
    (utilize o comando - para que o computador escolha o resultado).
*/

void ex09(){
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
    /*
    ENTRADA     SAIDA
    1           6, 4
    0           7, 3
    */
}

/*
    10. Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao
    final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo
    usuário em no máximo 10 tentativas!
*/

void ex10(){
    int numero, min, max, aleatorio, resposta, tentativas, acertou;

    printf("Insira um numero entre 1 e 1023: ");
    scanf("%i", &numero);

    max = 1023;
    min = 1;
    acertou = 0;
    tentativas = 0;
    srand(time(NULL));

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

    printf("Foram usadas %i tentativas e o numero %s descoberto", tentativas, (acertou)? "foi":"nao foi");

    /*
    ENTRADA     SAIDA
    5,1,1,3     3,1
    30,1,3      2,1
    2,1,1,1...  10,0
*/
}
