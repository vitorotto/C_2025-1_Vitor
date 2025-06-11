// Crie uma função que receba um valor e diga se é nulo ou não
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void isNull(int val) {
    if (val == 0)
        printf("Nulo");
    else
        printf("Válido");
}

int main() {
    // system("cls");
    SetConsoleOutputCP(65001);
    int val;
    printf("Informe um valor: ");
    scanf("%d", &val);

    isNull(val);
    return 0;
}