/*
    Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    system("clear");
    float num1, num2;
    printf("Insira o primeiro valor: ");
    scanf("%f", &num1);
    printf("Insira o segundo valor: ");
    scanf("%f", &num2);

    float maior = num1;
    if (maior > num2) {
        printf("O maior é %.1f", maior);
    } else {
        maior = num2;
        printf("O maior é %.1f", maior);
    }
}