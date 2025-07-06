/* Maior idade: Leia os dados de 5 pessoas e mostre o nome da pessoa mais velha. */

#include<stdio.h>
#include<stdlib.h>

int tamVet = 2;

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    system("clear");
    struct Pessoa vetPessoas[tamVet];

    for (int i = 0; i < tamVet; i++) {
        printf("Entre com o nome da pessoa %d: \n", i);
        // fgets(vetPessoas[i].nome, 50, stdin);
        scanf("%s", &vetPessoas[i].nome);
        setbuf(stdin,NULL);
        printf("Entre com a idade da pessoa %d: \n", i);
        scanf("%d", &vetPessoas[i].idade);
        setbuf(stdin,NULL);
    }

    int menor = vetPessoas[0].idade, iMenor = 0;
    for (int i = 1; i < tamVet; i++) {
        if (menor > vetPessoas[i].idade) {
            menor = vetPessoas[i].idade;
            iMenor = i;
        }
    }

    printf("A pessoa com menor idade é: \n");
    printf("Nome: %s | Idade: %d\n", vetPessoas[iMenor].nome, vetPessoas[iMenor].idade);
    
    return 0;
}