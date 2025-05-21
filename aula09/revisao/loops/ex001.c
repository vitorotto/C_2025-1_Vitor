// Tabuada: Crie um programa que peça ao usuário um número inteiro e imprima a tabuada desse número de 1 a 10 utilizando o loop for.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tab;
    printf("Insira um valor entre 1 e 10: ");
    scanf("%d", &tab);

    if (!(tab >= 1 && tab <= 10)) {
        printf("Tabuada inexistente\n");
        printf("Insira um valor de 1 a 10");
    } else {
        printf("Tabuada do %d\n", tab);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", i, tab, (i * tab));
        }
    }
    return 0;
}