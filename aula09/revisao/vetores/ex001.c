// Soma de Elementos: Crie um programa que declare um vetor de 5 números inteiros. Inicialize o vetor com alguns valores e, em seguida, calcule e imprima a soma de todos os elementos do vetor utilizando um loop for.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main() {

    SetConsoleOutputCP(65001);
    system("cls");
    srand(time(NULL));

    int vet[5], soma = 0;
    for (int i = 0; i < 5; i++) {
        vet[i] = rand()%10;
    }
    
    printf("Vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        soma += vet[i];
    }

    printf("Soma: %d", soma);
    return 0;
}