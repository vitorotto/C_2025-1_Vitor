// Adivinhe o Número: Implemente um jogo em que o computador gera um número aleatório entre 1 e 100. O jogador deve tentar adivinhar o número. Use o loop do..while para continuar pedindo palpites até que o jogador acerte. Forneça dicas como "maior" ou "menor" a cada tentativa

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main() {
        SetConsoleOutputCP(65001);
        system("cls");
        srand(time(NULL));

        int val = rand()%100;
        int palpite;

        do {
            printf("Adivinhe: ");
            scanf("%d", &palpite);
            if (palpite < val) {
                printf("Quase! Seu palpite está abaixo do valor.\n");
            } else if (palpite > val) {
                printf("Quase! Seu palpite está acima do valor.\n");
            } else {
                printf("Boaa!!! Acertou - valor: %d \n", val);
            }
        } while (palpite != val);

    return 0; 
}