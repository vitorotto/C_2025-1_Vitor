/*
    Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    system("clear");

    int num1, num2;

    printf("Insira o valor 01: ");
    scanf("%d", &num1);
    printf("Insira o valor 02: ");
    scanf("%d", &num2);

    int menor = 0;
    if (num1 > num2) {
        menor = num2;
        printf("[%d, %d]\n", menor, num1);
    } else {
        menor = num1;
        printf("[%d, %d]\n", menor, num2);
    }
    return 0;
}