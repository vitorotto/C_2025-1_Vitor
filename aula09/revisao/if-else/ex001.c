// Verificador de Números: Crie um programa que peça ao usuário para digitar um número inteiro. Use a estrutura if..else if...else para verificar se o número é positivo, negativo ou zero, e imprima a mensagem correspondente.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    
    int val;
    printf("Informe um valor inteiro: ");
    scanf("%d", &val);

    if (val == 0) {
        printf("valor igual a 0");
    } else if (val > 0) {
        printf("valor positivo");
    } else {
        printf("valor negativo");
    }

    return 0;
}    