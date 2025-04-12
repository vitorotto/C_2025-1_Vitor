// Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior é o menor elemento do vetor.


#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    int arr[tam], maior, menor;

    for (int i = 0; i < tam; i++) {
        // Menor
        printf("Insira o valor %d: ", i);
        scanf("%d", &arr[i]);

        if (i == 0) {
            menor = arr[i];
            maior = arr[i];
        }

        if (arr[i] < menor) {
            menor = arr[i];
        }

        // Maior
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}