// Crie um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral. Em seguida conte quantos alunos estão acima da média calculada.
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 5, cont = 0;
    float soma = 0;
    int arrNotas[tam];

    for (int i = 0; i < tam; i++) {
        printf("insira a nota do aluno %d: ", i);
        scanf("%d", &arrNotas[i]);
        soma += arrNotas[i];
    }

    // Média Geral
    float media = soma / tam;

    for (int i = 0; i < tam; i++) {
        if (arrNotas[i] > media) {
            cont++;
        }
    }

    printf("Média geral: %.2f", media);
    printf("\nAlunos acima da média: %d", cont);

    return 0;
}