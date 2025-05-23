// Maior e Menor Elemento: Escreva um programa que leia 10 números inteiros do usuário e os armazene em um vetor. Depois, percorra o vetor para encontrar e exibir o maior e o menor elemento.

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 10, vet[tam];
    
    for (int i = 0; i < tam; i++) {
        printf("Insira o valor na posição %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Vetor:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }

    int maior = vet[0], menor = vet[0];
    for (int i = 1; i < tam; i++) {
        if (maior < vet[i]) {
            maior = vet[i];
        }
        if (menor > vet[i]) {
            menor = vet[i];
        }
    }

    printf("\nmaior: %d / menor: %d", maior, menor);
    return 0;
}