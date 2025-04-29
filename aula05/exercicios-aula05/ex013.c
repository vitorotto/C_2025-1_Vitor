// Ler dois vetores: R de 5 elementos e S de 10 elementos. Gerar um vetor X de 15 elementos cujas 5 primeiras posições contenham os elementos de R e as 10 últimas posições, os elementos de S. Escrever o vetor X.

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    srand(time(NULL));

    int tam = 15;
    int arrR[5], arrS[10], arrX[tam];

    // Vetor R
    printf("\nVetor R: ");
    for (int i = 0; i < (5); i++) {
        arrR[i] = rand()%10;
        printf("%d ", arrR[i]);
    }
    
    // Vetor S
    printf("\nVetor S: ");
    for (int i = 0; i < 10; i++) {
        arrS[i] = rand()%10;
        printf("%d ", arrS[i]);
    }

    for (int i = 0; i < tam; i++) {
        if (i < 5) {
            arrX[i] = arrR[i];
        } else {
            arrX[i] = arrS[i - 5]; // ajusta o indice para zero para não ultrapassar os limites do vetor S, já que este tem indice que vai de 0 a 9 e não de 5 a 14.
        }
    }

    printf("\nVetor X: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arrX[i]);
    }

    return 0;
}