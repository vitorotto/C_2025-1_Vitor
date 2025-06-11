// Crie uma função em linguagem C que receba 2 números e retorne o menor valor

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int menorVal(int a, int b) {
    if (a < b) {
        return a;
    } else if (a > b) {
        return b;
    } else {
        return 0;
    }
}

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    int a, b;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    if (menorVal(a, b) == 0) {
        printf("Os dois valores são iguais.");
    } else {
        printf("%d é o menor", menorVal(a, b));
    }

    return 0;
}