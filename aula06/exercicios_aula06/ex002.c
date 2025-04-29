// Crie um programa que calcula o comprimento de uma string

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    char vetStr[100];
    printf("Digite algo: ");
    gets(vetStr);

    int tam = 0;
    for (int i = 0; vetStr[i] != '\0'; i++) {
        tam = i;
    }

    printf("A string tem %d caractéres.", tam + 1);
}