// Crie uma função em Linguagem C que receba 3 números e retorne o maior valor

#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

int maiorDe3(int a, int b, int c) {
    int vals[3] = {a, b, c};

    int maior = vals[0];
    for (int i = 0; i < 3; i++) {
        if (maior < vals[i]) {
            maior = vals[i];
        }
    }
    return maior;
}

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int a, b, c;

    printf("Informe o valor de 'a': ");
    scanf("%d", &a);
    printf("Informe o valor de 'b': ");
    scanf("%d", &b);
    printf("Informe o valor de 'c': ");
    scanf("%d", &c);

    printf("%d é o maior", maiorDe3(a, b, c));

    return 0;
}