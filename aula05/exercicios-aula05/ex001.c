// Criar um vetor A com 5 elementos, carregar ele com números aleatórios. Declarar um vetor B. Copiar todos os elementos do Vetor A para o Vetor B e mostrar os dois na tela;

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    srand(time(NULL));

    int arrA[5], arrB[5];
    for (int i = 0; i < 5; i++) {
        arrA[i] = rand()%1000;
        arrB[i] = arrA[i];
    }

    printf("Array A: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrA[i]);
    }

    printf("\nArray B: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arrB[i]);
    }

    return 0;

}