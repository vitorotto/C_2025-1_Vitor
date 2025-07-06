/* Cadastro de pessoa: Crie uma struct Pessoa com nome, idade e altura. Leia e mostre os dados de uma pessoa. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {

    struct Pessoa
    {
        char nome[50];
        int idade;
        float altura;
    };

    struct Pessoa p1;
    printf("Entre com o seu nome\n");
    fgets(p1.nome, 50, stdin);

    printf("Entre com a sua idade: \n");
    scanf("%d", &p1.idade);

    printf("Entre com a sua altura: \n");
    scanf("%f", &p1.altura);

    printf("Pessoa 01: \n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}