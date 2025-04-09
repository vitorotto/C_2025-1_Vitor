// Escreva um programa que leia 10 valores e conte quantos deles estão no intervalo entre 10 e 20. Depois escreva essa informação

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int val, cont, i;
    cont = 0;

    for (i = 0; i < 10; i++) {
        printf("Insira um valor: ");
        scanf("%d", &val);
        if (val >= 10 && val <= 20) {
            cont++;
        }
    }

    printf("cont: %d", cont);
}