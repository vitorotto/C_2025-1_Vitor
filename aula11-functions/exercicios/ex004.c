// Crie uma função em linguagem C que receba 2 números e retorne o maior valor.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void maiorMenor(int a, int b) {
    if (a > b) {
        printf("%d é maior que %d", a, b); 
    } else if (a < b) {
        printf("%d é maior que %d", b, a);
    }
}

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    int a, b;

    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);

    maiorMenor(a, b);

    return 0;

    
}