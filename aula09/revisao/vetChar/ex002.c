// Comparação de Strings: Escreva um programa que leia duas strings do usuário e as compare (sem usar a função strcmp). Informe se as strings são iguais ou diferentes.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    char str1[20];
    char str2[20];

    printf("informe a primeira string");
    gets(str1);

    printf("informe a segunda string");
    gets(str2);

    int diferente = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            diferente = 1;
        }
    }

    int tamanho1 = 0, tamanho2 = 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        tamanho1++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        tamanho2++;
    }

    if (diferente != 0 || tamanho1 != tamanho2) {
        printf("As strings são diferentes");
    } else {
        printf("iguais");
    }

    return 0;
}