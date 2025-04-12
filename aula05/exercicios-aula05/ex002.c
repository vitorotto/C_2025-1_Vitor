// Declarar três vetores A, B e C de 10 elementos. Gerar números aleatórios para os vetores A e B. O vetor C deve receber a soma dos elementos do vetor A com o vetor B. Mostrar os três vetores

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    srand(time(NULL));

    int tamanho = 10;
    int arrA[tamanho], arrB[tamanho], arrC[tamanho];

    for (int i = 0; i < tamanho; i++) {
        arrA[i] = rand()%100;
        arrB[i] = rand()%100;
        arrC[i] = arrA[i] + arrB[i];
    }

    printf("\nArray A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arrA[i]);
    }

    printf("\nArray B:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arrB[i]);
    }

    printf("\nArray C:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arrC[i]);
    }

    return 0;
}