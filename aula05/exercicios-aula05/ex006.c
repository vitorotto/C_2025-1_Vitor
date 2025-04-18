// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 5, maior, posMaior;
    int arr[tam];

    for (int i = 0; i < tam; i++) {
        printf("Insira o valor %d: ", i);
        scanf("%d", &arr[i]);

        // maior
        if (i == 0) {
            maior = arr[i];
            posMaior = i;
        }

        if (arr[i] > maior) {
            maior = arr[i];
            posMaior = i;
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMaior: %d\n", maior);
    printf("Posição: %d", posMaior);
}