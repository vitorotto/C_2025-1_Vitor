// Calculadora Simples: Desenvolva um programa que solicite ao usuário dois números e uma operação (+, -, *, /). Utilize a estrutura switch..case para realizar a operação escolhida e exibir o resultado. Considere a divisão por zero.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {

    SetConsoleOutputCP(65001);
    system("cls");
    // setbuf('',NULL);

    int n1, n2;
    float result;
    char opr;

    printf("Informe a operação: ");
    scanf("%c", &opr);

    printf("Informe o n1: ");
    scanf("%d", &n1);
    
    printf("Informe o n2: ");
    scanf("%d", &n2);

    switch (opr)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    
    default:
        printf("Ocorresu algum erro");
        break;
    }

    printf("%.2f", result);

    return 0;
}