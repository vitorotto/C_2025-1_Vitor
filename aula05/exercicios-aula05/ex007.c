// Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa. 

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 6, arr[tam];
    for (int i = 0; i < tam; i++) {
        printf("Insira o valor na pos %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nVetor: \n");
    for (int i = tam; i >= 0; ) {
        i--; // faz o decremento antes para evitar que um endereço de memória sem nenhum valor seja impresso no console.
        printf("%d ", arr[i]);
    }
    return 0;
}