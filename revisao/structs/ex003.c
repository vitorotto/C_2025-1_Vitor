// Média de notas: Crie uma struct Aluno com nome e duas notas. Leia os dados de 3 alunos e mostre a média de cada um.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tamVet = 3;

struct Aluno {
    char nome[50];
    float n1, n2;
    float media;
};

int main() {
    system("clear");
    
    struct Aluno vetAlunos[tamVet];

    for (int i = 0; i < tamVet; i++) {
        printf("\nInsira o nome do aluno %d: ", i);
        fgets(vetAlunos[i].nome, sizeof(vetAlunos[i].nome), stdin);
        vetAlunos[i].nome[strcspn(vetAlunos[i].nome, "\n")] = 0;
        setbuf(stdin,NULL);
        printf("\nInsira a nota 1 do aluno %d: ", i);
        scanf("%f", &vetAlunos[i].n1);
        setbuf(stdin,NULL);
        printf("\nInsira a nota 2 do aluno %d: ", i);
        scanf("%f", &vetAlunos[i].n2);
        setbuf(stdin,NULL);
    }

    for (int i = 0; i < tamVet; i++) {
        vetAlunos[i].media = (vetAlunos[i].n1 + vetAlunos[i].n2) / 2;
    }

    printf("Média dos alunos: \n");
    for (int i = 0; i < tamVet; i++) {
        printf("Nome: %s, média final: %.2f\n", vetAlunos[i].nome, vetAlunos[i].media);
    }

    return 0;
}