// Busca em Matriz: Desenvolva um programa que declare e inicialize uma matriz 4x4 de números inteiros. Peça ao usuário para digitar um número e verifique se esse número está presente na matriz. Se estiver, informe a sua posição (linha e coluna).

#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    srand(time(NULL));

    int mtz[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mtz[i][j] = rand()%100;
        }
    }
  
    printf("matriz: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mtz[i][j]);
        }
        printf("\n");
    }

    int achei = 0, val, posL, posJ;
    printf("qual valor pesquisar? ");
    scanf("%d", &val);
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (val == mtz[i][j]) {
                achei = 1;
                posL = i;
                posJ = j;
            }
        }
    }
    if (achei == 1) {
        printf("valor %d encontrado na linha %d e coluna %d", val, posL, posJ);
    } else {
        printf("Valor não encontrado");
    }

    return 0;
}