// Crie uma função que receba um valor e informe se ele é positivo ou não.
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void isPositive(int n) {
    if (n == 0) {
        printf("Zero");
    } else if (n > 0) {
        printf("Positivo");
    } else {
        printf("Negativo");
    }
} 

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    int num;
    printf("Informe um valor: ");
    scanf("%d", &num);

    isPositive(num);
    return 0;
}