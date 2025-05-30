#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

// Função com parametro
int soma(int n1, int n2) {
    int soma = n1 + n2;
    return soma;
}
int sibtrai(int n1, int n2) {
    int soma = n1 - n2;
    return soma;
}

// usamos voidpor que é uma função que não retorna nada
void mostrarResultado(int n1, int n2, int resp, char op) {
    printf("%d %c %d = %d\n", n1, n2, op, resp);
}

int main() {
    system("cls");
    int numUm, numDois, resposta;
    printf("Digite um numero: ");
    scanf("%d", &numUm);
    printf("Digite um numero: ");
    scanf("%d", &numDois);
    resposta = soma(numUm, numDois);
    mostrarResultado(numUm, numDois, resposta, '+');
    resposta = subtrai(numUm, numDois);
    mostrarResultado(numUm, numDois, resposta, '-');
    return 0;
}