/*
    Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu)
*/

#include<stdio.h>
#include<stdlib.h>

void podeVotar(int nascimento,int anoAtual) {
    int idade = anoAtual - nascimento;
    if (idade >= 16 && idade < 18) {
        printf("Voto opcional\n");
    } else if (idade >= 18) {
        printf("Voto obrigatório\n");
    } else {
        printf("não pode votar\n");
    }
}

int main() {
    system("clear");
    int anoAtual, nascimento;
    printf("Em que ano estamos? ");
    scanf("%d", &anoAtual);
    printf("Insira o ano do seu nascimento: ");
    scanf("%d", &nascimento);
    podeVotar(nascimento, anoAtual);
    return 0;
}