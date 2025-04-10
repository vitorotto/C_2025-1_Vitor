// Escreva um programa que leia um número calcule e imprima a tabuada dele (1 a 10)

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int n;
    printf("Insira um valor de 0 a 10: ");
    scanf("%d", &n);

    while (n < 1 || n > 10) {
        printf("Erro! Valor inválido.\n");
        printf("Insira um valor de 0 a 10: ");
        scanf("%d", &n);
    }

    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, (n * i));
    }

    return 0;
}