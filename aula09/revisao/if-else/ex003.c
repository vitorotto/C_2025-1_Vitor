// Classificador de Triângulos: Escreva um programa que receba três valores inteiros representando os lados de um triângulo. Use a estrutura if..else if...else para determinar se o triângulo é equilátero (todos os lados iguais), isósceles (dois lados iguais) ou escaleno (todos os lados diferentes).

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int l1, l2, l3;

    printf("Insira os valores:\n");
    printf("Informe o lado 01: ");
    scanf("%d", &l1);
    printf("Informe o lado 02: ");
    scanf("%d", &l2);
    printf("Informe o lado 03: ");
    scanf("%d", &l3);

    if (l1 == l2 && l2 == l3) {
        printf("Equilátero");
    } else if (l1 != l2 && l1 != l3 && l2 != l3) {
        printf("Escaleno");
    } else {
        printf("Isósceles");
    }

    return 0;
}