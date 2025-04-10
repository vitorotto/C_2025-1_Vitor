// Escreva um programa para ler um valor entre 1 (inclusive) e 10 (inclusive). Se o valor lido não estiver entre 1 (inclusive) e 10 (inclusive), deve ser lido um novo valor. Após a leitura do valor, escrever o valor lido na tela. 

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int valor;

    printf("Insira um valor entre 1 a 10: ");
    scanf("%d", &valor);
    
    int cont = 0;
    while (valor >= 1 && valor <= 10) {
        printf("Insira um valor entre 1 a 10: ");
        scanf("%d", &valor);
        if (valor >= 1 && valor <= 10) {
            printf("valor: %d", valor);
        }
        cont++;
    }

    if (cont <= 1) {
        printf("valor: %d", valor);
    }

    return 0;
}