// Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um programa que permita a entrada das seguintes informações: 
// a) Número total de mercadorias no estoque (quantidade total). 
//b) Valor de cada mercadoria. 
//Ao final imprimir o valor total em estoque e a média de valor das mercadorias

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    // enquanto faça
    printf("\nWhile\n");
    int cont = 0;
    while(cont < 10) {
        printf("%d", cont);
        cont++;
    }

    // faça enquanto
    printf("\ndo...while\n");
    cont = 0;
    do {
        printf("%d", cont);
        cont++;
    } while (cont < 10);

    // for 01
    printf("\nfor\n");
    for (int i = 0; i < 10; i++) {
        printf("%d", i);
    }
    
    // for 02
    printf("\nOutro exemplo de for\n");
    cont = 0;
    for (; cont < 10;) {
        printf("%d", cont);
        cont++;
    }
}
