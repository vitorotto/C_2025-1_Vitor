// Leia uma sequência qualquer de 10 caracteres, armazene em um vetor, depois, leia outro caractere do teclado, e conte quantas vezes ele aparece no vetor

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 3;
    char arrChar[tam];

    for (int i = 0; i < tam; i++) {
        setbuf(stdin,NULL);
        printf("insira o caractere na pos %c: ", i);
        scanf("%c", &arrChar[i]);
    }
    
    printf("Vetor: ");
    for (int i = 0; i < tam; i++) {
        printf("%c", arrChar[i]);
    }

    char pesq;
    int contPesq = 0;
    printf("\nDigite o caractere que deseja pesquisar: ");
    scanf(" %c", &pesq); // espaço antes para anular o buffer do teclado

    for (int i = 0; i < tam; i++) {
        if (pesq == arrChar[i]) {
            contPesq++;
        }
    }

    printf("Letra pesquisada: %c", pesq);
    printf("\nContador de ocorrências: %d", contPesq);

    return 0;
}