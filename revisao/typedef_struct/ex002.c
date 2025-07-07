// Agenda telefônica: Crie um typedef struct chamado Contato com nome e telefone. Cadastre 5 contatos e exiba os dados.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char nome[30];
    char telefone[20];
} Contato;

int main() {
    system("clear");

    Contato vetContatos[2];

    for (int i = 0; i < 2; i++) {
        printf("Nome: ");
        fgets(vetContatos[i].nome, sizeof(vetContatos[i].nome), stdin);
        printf("\nNúmero: ");
        fgets(vetContatos[i].telefone, sizeof(vetContatos[i].telefone), stdin);
    }


    return 0;
}