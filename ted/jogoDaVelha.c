// Programa para implementar um jogo da velha

// Ascii
/*
    ' ' = 32
    X   = 88
    O   = 79
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int switchMode() {
    int input;
    printf("Modo de jogo: ");
    printf("\nSe nenhum for selecionado, você jogará contra o computador");
    printf("\nPvP - 1");
    printf("\nPvE - 0\n");
    scanf("%d", &input);
    return input;
}

int iniciarTabuleiro() {
    int tabuleiro[3][3];
    int posTab = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = posTab;
            posTab++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d]", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// int atualizarTabuleiro(int posJogada) {
//     return
// }

// Função para formatar as posições


int sortearJogador() {
    int primeiroJogador = rand()%3;
    if (primeiroJogador == 0) {
        primeiroJogador = 1;
    }
    return primeiroJogador;
}

int main() {

    system("clear");
    srand(time(NULL));
    setbuf(stdin, NULL);

    char letraEscolhida;
    int jogadorUm = 1, letraJogadorUm;
    int jogadorDois = 2, letraJogadorDois;
    // int numJogadas = 9;

    printf("Modo de jogo: ");
    if (switchMode() == 1) printf("\nPvP\n");
    else printf("\nPvE\n");

    iniciarTabuleiro();

    // Escolha de letra
    printf("\nJogador 01 - escolha X ou O: \n");
    scanf(" %c", &letraEscolhida);

    if (letraEscolhida == 'X' || letraEscolhida == 'x') {
        letraJogadorUm = 88;
        letraJogadorDois = 79;
    } else {
        letraJogadorUm = 79;
        letraJogadorDois = 88;
    }

    printf("\nLetra jogador 01: %c", letraJogadorUm);
    printf("\nLetra jogador 02: %c", letraJogadorDois);


    int primeiroJogador = sortearJogador();
    if (primeiroJogador == 1) {
        printf("\nPrimeiro Jogador: %d - letra: %c\n", jogadorUm, letraJogadorUm);
    } else {
        printf("\nPrimeiro Jogador: %d - letra %c\n", jogadorDois, letraJogadorDois);
    }

    // while (numJogadas < 9) {
    //     int posJogada;
    //     int tabuleiro[3][3];

    //     printf("Vez do X\n");
    //     printf("Digite a posiçao que deseja inserir a letra: ");
    //     scanf("%d", &posJogada);

    //     // Atualizando o tabuleiro
    //     for(int i = 0; i < 3; i++) {
    //         for (int j = 0; j < 3; j++){

    //         }
    //     }
    //     printf("Vez do O\n");
    //     printf("Digite a posiçao que deseja inserir a letra: ");
    //     scanf("%d", &posJogada);
    // }

    return 0;
}