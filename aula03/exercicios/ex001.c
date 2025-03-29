/*
    As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra. 
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    system("clear");
    int nAple;
    printf("Quantas maças deseja comprar? ");
    scanf("%d", &nAple);

    if (nAple < 12) {
        float valTotal = nAple * 1.3;
        printf("Cada maça custa R$1,30. Total: %.2f\n", valTotal);
    } else {
        float valTotal = nAple * 1;
        printf("Cada maça custa R$1,00. Total: R$%.2f\n", valTotal);
    }
}