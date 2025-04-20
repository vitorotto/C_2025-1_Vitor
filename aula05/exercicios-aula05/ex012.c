// Faça um programa que leia uma lista de até 10 salários, a cada salário lido o programa deve perguntar se o usuário gostaria de continuar a leitura, caso responda Sim, o programa deve ler mais um salário, até o limite de 10. Ao final ler o percentual de reajuste dos salários, reajustar e mostrar os novos valores.

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int tam = 5, i = 0;
    char opc = 's';
    float arrSal[tam], arrAjustado[tam];

    while (opc == 's' && i < tam) {
        // setbuf(stdin,NULL);
        printf("Informe o salário %d: ", i);
        scanf("%f", &arrSal[i]);

        printf("\nDeseja adicionar mais um salário? (s / n) ");
        scanf(" %c", &opc);

        i++;

        if (i == tam) {
            printf("\nO número máximo de valores foi alcançado.");
        }
    }

    float reajuste;
    printf("\nInforme o percentual de reajuste: ");
    scanf(" %f", &reajuste);

    for (int i = 0; i < tam; i++) {
        arrAjustado[i] = arrSal[i] + (arrSal[i] * (reajuste / 100));
    }

    printf("\nSalários originais: ");
    for (int i = 0; i < tam; i++) {
        printf("| %.2f |", arrSal[i]);
    }
 
    printf("\nReajuste: %.2f%%", reajuste);

    printf("\nSalários ajustados: ");
    for (int i = 0; i < tam; i++) {
        printf("| %.2f |", arrAjustado[i]);
    }

    return 0;
}