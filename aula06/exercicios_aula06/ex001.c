// Faça um programa que então leia uma string e a imprima.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    char nome[20];
    printf("Digite o seu nome: ");
    gets(nome);

    printf("Seu nome é: ");
    for (int i = 0; nome[i] != '\0'; i++) {
        printf("%c", nome[i]);
    }
}