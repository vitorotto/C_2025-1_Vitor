// Declare três vetores com até 100 números, o primeiro deve receber números aleatórios, o segundo deve receber os números pares do primeiro vetor e o segundo os números ímpares do primeiro vetor. Ao final mostrar os três vetores

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 100, contPar = 0, contImpar = 0;
    int arr[tam], arrPar[tam], arrImpar[tam];

    for (int i = 0; i < tam; i++) {
        printf("Insira o valor na pos %d: ", i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            arrPar[contPar] = arr[i];
            contPar++;
        } else {
            arrImpar[contImpar] = arr[i];
            contImpar++;
        }
    }

    printf("Vetor Original\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nVetor de pares\n");
    for (int i = 0; i < contPar; i++) {
        printf("%d ", arrPar[i]);
    }
    
    printf("\nVetor de impar\n");
    for (int i = 0; i < contImpar; i++) {
        printf("%d ", arrImpar[i]);
    }

    return 0;
}