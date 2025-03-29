/*
    Escrever um programa que lê dois valores a e b e escreva se são múltiplos ou não são múltiplos (use o operador mod, ele retorna o resto da divisão por exemplo (10 mod 5 retorna 0) 
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    system("clear");

    int num1, num2;

    printf("insira o valor 01: ");
    scanf("%d", &num1);
    printf("insira o valor 02: ");
    scanf("%d", &num2);

    if ((num1 % num2) > 0) {
        printf("Não são múltiplos\n");
    } else {
        printf("São múltiplos\n");
    }

    return 0;
}