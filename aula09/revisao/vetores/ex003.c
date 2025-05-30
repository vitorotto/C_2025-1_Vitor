// Inversão de Vetor: Desenvolva um programa que declare e inicialize um vetor de inteiros. Crie um novo vetor com os elementos do primeiro vetor em ordem inversa e imprima ambos os vetores.

#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    srand(time(NULL));

    int tam = 5, tamAux = tam, vet1[] = {1, 2, 3, 4, 5}, vet2[tam];

    for (int i = 0; i < tam; i++) {
        vet2[i] = vet1[tamAux - 1];
        tamAux--;
    }

    /**
     * EXPLICAÇÃO --> [tamAux - 1]
     * Isso ocorre porque o vetor em linguagens como o C começam com o índice 0, então o ultimo indice para o um vetor de tamanho = 5 é 4, ou seja, tamanho - 1 (5 - 1)
     */


    // int ind = -1;
    // do {
    //     vet2[ind] = vet1[tamAux];
    //     tamAux--;
    //     ind++;
    // } while (ind < tam);

    printf("Vetor 01: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet1[i]);
    }
    
    printf("\nVetor 02: \n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", vet2[i]);
    }
    return 0;
}
