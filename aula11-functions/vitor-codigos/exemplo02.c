#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int n1, n2, resultado;

void soma() {
    resultado = n1 + n2;
}

void subtrai() {
    resultado = n1 - n2;
}

void mostraResultado(char op) {
    printf("%d %c %d = %d\n", n1, op, n2, resultado);
}

int main() {
    // system("cls");
    SetConsoleOutputCP(65001);
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);
    soma();
    mostrarResultado('+');
    subtrai();
    mostrarResultado('-');
    return 0;
}