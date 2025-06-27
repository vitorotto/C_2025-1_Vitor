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

// Função para selecionar o modo de jogo
int switchMode() {
    int input;
    printf("Modo de jogo: ");
    printf("\nSe nenhum for selecionado, você jogará contra o computador");
    printf("\nPvP - 1");
    printf("\nPvE - 0\n");
    scanf("%d", &input);
    return input;
}

// Função para exibir as posições do tabuleiro
int posicoesDoTabuleiro() {
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

// Função para sortear o primeiro jogador
int sortearJogador() {
    int primeiroJogador = rand()%3;
    if (primeiroJogador == 0) {
        primeiroJogador = 1;
    }
    return primeiroJogador;
}

// Modo PvP
int modoPvP() {

    char letraEscolhida;
    int letraJogadorUm;
    int letraJogadorDois;
    int numJogadas = 9;

    posicoesDoTabuleiro();

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
    int segundoJogador;

    if (primeiroJogador == 1) {
        printf("\nPrimeiro jogador: %d - letra: %c\n", primeiroJogador, letraJogadorUm);
        segundoJogador = 2;
        printf("Segundo jogador: %d - letra: %c\n", segundoJogador, letraJogadorDois);
    } else {
        printf("\nPrimeiro jogador: %d - letra: %c\n", primeiroJogador, letraJogadorDois);
        segundoJogador = 1;
        printf("\nSegundo jogador: %d - letra: %c\n", segundoJogador, letraJogadorUm);
    }

    int mtzTab[3][3]; 

    printf("\nTabuleiro inicial:\n");

    // Inicializando o tabuleiro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mtzTab[i][j] = 32;
        }
    }

    // Exibindo o tabuleiro inicial
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[ ]");
        }
        printf("\n");
    }

    printf("\nIniciando o jogo...\n");

    int jogadorAtual = primeiroJogador;
    
    
    while (numJogadas > 0) {
        int posicao;

        printf("\nJogador %d - Escolha uma posição: ", jogadorAtual);
        scanf("%d", &posicao);

        // Verifica se a posição é válida
        while (posicao < 1 || posicao > 9) {
            printf("Posição inválida! Tente novamente.\n");
            printf("Jogador %d - Escolha uma posição: ", jogadorAtual);
            scanf("%d", &posicao);
        }

        int linha = (posicao - 1) / 3;
        int coluna = (posicao - 1) % 3;
        

        // Verifica se a posição já está ocupada
        while (mtzTab[linha][coluna] != 32) {
            printf("Posição já ocupada! Tente novamente.\n");
            printf("Jogador %d - Escolha uma posição: ", jogadorAtual);
            scanf("%d", &posicao);

            // Verifica se a posição é válida
            while (posicao < 1 || posicao > 9) {
                printf("Posição inválida! Tente novamente.\n");
                printf("Jogador %d - Escolha uma posição: ", jogadorAtual);
                scanf("%d", &posicao);
            }

            linha = (posicao - 1) / 3;
            coluna = (posicao - 1) % 3;
        }

        // Marca a posição escolhida pelo jogador
        if (jogadorAtual == 1) {
            mtzTab[linha][coluna] = letraJogadorUm;
        } else {
            mtzTab[linha][coluna] = letraJogadorDois;
        }

        system("clear");

        // Exibe o tabuleiro atualizado
        printf("\nTabuleiro atualizado:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (mtzTab[i][j] == 32) {
                    printf("[ ]");
                } else {
                    printf("[%c]", mtzTab[i][j]);
                }
            }
        printf("\n");
        }

        // Verifica se há um vencedor
        // Verifica linhas
        for (int i = 0; i < 3; i++) {
            if (mtzTab[i][0] == mtzTab[i][1] && mtzTab[i][1] == mtzTab[i][2] && mtzTab[i][0] != 32) {
                printf("\nJogador %d venceu!\n", jogadorAtual);
                return 0;
            }
        }

        // Verifica colunas
        for (int j = 0; j < 3; j++) {
            if (mtzTab[0][j] == mtzTab[1][j] && mtzTab[1][j] == mtzTab[2][j] && mtzTab[0][j] != 32) {
                printf("\nJogador %d venceu!\n", jogadorAtual);
                return 0;
            }
        }

        // Verifica diagonais
        if ((mtzTab[0][0] == mtzTab[1][1] && mtzTab[1][1] == mtzTab[2][2] && mtzTab[0][0] != 32) ||
            (mtzTab[0][2] == mtzTab[1][1] && mtzTab[1][1] == mtzTab[2][0] && mtzTab[0][2] != 32)) {
            printf("\nJogador %d venceu!\n", jogadorAtual);
            return 0;
        }

        // Alterna o jogador
        if (jogadorAtual == 1) {
            jogadorAtual = 2;
        } else {
            jogadorAtual = 1;
        }

        // Empate
        if (numJogadas == 1) {
            printf("\nDeu velha! Não há mais jogadas disponíveis.\n");
            return 0;
        }

        numJogadas--;

    }
    return 0;
}

// Modo PvE
int modoPvE() {
    
    char letraEscolhida;
    int letraJogadorUm;
    int letraJogadorDois;
    int numJogadas = 9;

    posicoesDoTabuleiro();

    // Escolha de letra
    printf("\nJogador - escolha X ou O: \n");
    scanf(" %c", &letraEscolhida);

    if (letraEscolhida == 'X' || letraEscolhida == 'x') {
        letraJogadorUm = 88;
        letraJogadorDois = 79;
    } else {
        letraJogadorUm = 79;
        letraJogadorDois = 88;
    }

    printf("\nLetra jogador: %c", letraJogadorUm);
    printf("\nLetra computador: %c", letraJogadorDois);

    int primeiroJogador = 1;
    // int segundoJogador = 2;

    printf("\nPrimeiro jogador: Jogador - letra: %c\n", letraJogadorUm);
    printf("Segundo jogador: Computador - letra: %c\n", letraJogadorDois);

    int mtzTab[3][3]; 

    printf("\nTabuleiro inicial:\n");

    // Inicializando o tabuleiro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mtzTab[i][j] = 32;
        }
    }

    // Exibindo o tabuleiro inicial
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[ ]");
        }
        printf("\n");
    }

    printf("\nIniciando o jogo...\n");

    int jogadorAtual = primeiroJogador;
    
    
    while (numJogadas > 0) {
        int posicao;

        if (jogadorAtual == 1) {
            printf("\nJogador - Escolha uma posição: ");
            scanf("%d", &posicao);
        } else {
            do {
                posicao = rand() % 9 + 1; // Gera um número entre 1 e 9
            } while (mtzTab[(posicao - 1) / 3][(posicao - 1) % 3] != 32);
            printf("\nComputador escolheu a posição: %d\n", posicao);
        }

        // Verifica se a posição é válida
        while (posicao < 1 || posicao > 9) {
            printf("Posição inválida! Tente novamente.\n");
            if (jogadorAtual == 1) {
                printf("Jogador - Escolha uma posição: ");
            } else {
                do {
                    posicao = rand() % 9 + 1; // Gera um número entre 1 e 9
                } while (mtzTab[(posicao - 1) / 3][(posicao - 1) % 3] != 32);
                printf("\nComputador escolheu a posição: %d\n", posicao);
            }
            scanf("%d", &posicao);
        }

        int linha = (posicao - 1) / 3;
        int coluna = (posicao - 1) % 3;
        

        // Verifica se a posição já está ocupada
        while (mtzTab[linha][coluna] != 32) {
            printf("Posição já ocupada! Tente novamente.\n");
            if (jogadorAtual == 1) {
                printf("\nJogador - Escolha uma posição: ");
                scanf("%d", &posicao);
            } else {
                do {
                    posicao = rand() % 9 + 1; // Gera um número entre 1 e 9
                } while (mtzTab[(posicao - 1) / 3][(posicao - 1) % 3] != 32);
                printf("\nComputador escolheu a posição: %d\n", posicao);
            }

            // Verifica se a posição é válida
            while (posicao < 1 || posicao > 9) {
                printf("Posição inválida! Tente novamente.\n");
                if (jogadorAtual == 1) {
                    printf("Jogador - Escolha uma posição: ");
                } else {
                    do {
                        posicao = rand() % 9 + 1; // Gera um número entre 1 e 9
                    } while (mtzTab[(posicao - 1) / 3][(posicao - 1) % 3] != 32);
                    printf("\nComputador escolheu a posição: %d\n", posicao);
                }
                scanf("%d", &posicao);
            }

            linha = (posicao - 1) / 3;
            coluna = (posicao - 1) % 3;
        }

        // Marca a posição escolhida pelo jogador
        if (jogadorAtual == 1) {
            mtzTab[linha][coluna] = letraJogadorUm;
        } else {
            mtzTab[linha][coluna] = letraJogadorDois;
        }


        // Exibe o tabuleiro atualizado
        printf("\nTabuleiro atualizado:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (mtzTab[i][j] == 32) {
                    printf("[ ]");
                } else {
                    printf("[%c]", mtzTab[i][j]);
                }
            }
        printf("\n");
        }

        // Verifica se há um vencedor
        // Verifica linhas
        for (int i = 0; i < 3; i++) {
            if (mtzTab[i][0] == mtzTab[i][1] && mtzTab[i][1] == mtzTab[i][2] && mtzTab[i][0] != 32) {
                if (jogadorAtual == 1) {
                    printf("\nJogador venceu!\n");
                } else {
                    printf("\nComputador venceu!\n");
                }
                return 0;
            }
        }

        // Verifica colunas
        for (int j = 0; j < 3; j++) {
            if (mtzTab[0][j] == mtzTab[1][j] && mtzTab[1][j] == mtzTab[2][j] && mtzTab[0][j] != 32) {
                if (jogadorAtual == 1) {
                    printf("\nJogador venceu!\n");
                } else {
                    printf("\nComputador venceu!\n");
                }
                return 0;
            }
        }

        // Verifica diagonais
        if ((mtzTab[0][0] == mtzTab[1][1] && mtzTab[1][1] == mtzTab[2][2] && mtzTab[0][0] != 32) ||
            (mtzTab[0][2] == mtzTab[1][1] && mtzTab[1][1] == mtzTab[2][0] && mtzTab[0][2] != 32)) {
            if (jogadorAtual == 1) {
                printf("\nJogador venceu!\n");
            } else {
                printf("\nComputador venceu!\n");
            }
            return 0;
        }

        // Alterna o jogador
        if (jogadorAtual == 1) {
            jogadorAtual = 2;
        } else {
            jogadorAtual = 1;
        }

        // Empate
        if (numJogadas == 1) {
            printf("\nDeu velha! Não há mais jogadas disponíveis.\n");
            return 0;
        }

        numJogadas--;

    }
    return 0;
    
}

int main() {

    system("clear");
    srand(time(NULL));
    setbuf(stdin, NULL);

    if (switchMode() == 1) {
        printf("\nPvP\n");
        modoPvP();
    } else {
        printf("\nPvE\n");
        modoPvE();
    }
    return 0;
}