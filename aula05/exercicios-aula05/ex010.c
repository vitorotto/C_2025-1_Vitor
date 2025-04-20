// Declarar dois vetores A e B, ler números para o vetor A, em seguida armazenar no vetor B a multiplicação de cada elemento de A multiplicado pelo seu índice +1

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 5;
    int arrA[tam], arrMult[tam];

    for (int i = 0; i < tam; i++) {
        printf("Informe o valor da pos %d: ", i);
        scanf("%d", &arrA[i]);

        int valorMult = arrA[i] * (i + 1);

        arrMult[i] = valorMult;
    }

    printf("Vetor original: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arrA[i]);
    }
    
    printf("\nVetor multiplicado: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arrMult[i]);
    }

    return 0;
}