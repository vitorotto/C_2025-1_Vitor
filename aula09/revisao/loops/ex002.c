// Soma de números: Desenvolva um programa que leia números inteiros do usuário até que ele digite o número 0. Utilize o loop while pra calcular e exibir a soma de todos os números digitados (excluíndo o 0)

#include<windows.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int val, soma = 0;
    printf("Informe valores para somar (0 para encerrar)\n");

    while (val != 0) {
        printf("Valor: ");
        scanf("%d", &val);
        
        if (val != 0) {
            soma += val;
            printf("soma atual: %d + %d = %d\n", soma, val, (soma + val));
        }
        
    }

    printf ("Soma total: %d", soma);
    return 0;
}