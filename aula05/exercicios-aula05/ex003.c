// Gere um vetor aleatoriamente com até 100 números. Depois conte quantos deles são pares, mostre o vetor e a quantidade de números pares encontrados

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
    system("cls");
    SetConsoleOutputCP(65001);
    srand(time(NULL));

    int tam = 10, cont = 0;
    int arrA[tam], arrPar[tam];

    for (int i = 0; i < tam; i++) {
        arrA[i] = rand()%10;
        if (arrA[i] % 2 == 0) {
            arrPar[cont] = arrA[i];
            cont++;
        }
    }

    printf("\nVetor original: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arrA[i]);
    }
    printf("\nA quantidade de números pares é: %d\n", cont);

    printf("Vetor de pares: ");
    for (int i = 0; i < cont; i++) {
        printf("%d ", arrPar[i]);
    }

    return 0;
}