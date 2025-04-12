// Declare um vetor, gere números aleatórios para ele, em seguida realize a soma de todos os elementos do vetor, mostre o vetor e a soma

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
    system("cls");
    SetConsoleOutputCP(65001);
    srand(time(NULL));

    int tam = 10, sum = 0;
    int arrA[tam];

    for (int i = 0; i < tam; i++) {
        arrA[i] = rand()%10;
        sum += arrA[i];
    }
    
    for (int i = 0; i < tam; i++) {
        printf("%d ", arrA[i]);
    }

    printf("Soma = %d", sum);
    return 0;
}