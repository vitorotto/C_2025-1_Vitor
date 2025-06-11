// Crie uma função em linguagem C que receba 3 números e retorne o menor valor

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int menorDe3(int a, int b, int c) {
    int vals[3] = {a, b, c};

    int menor = vals[0];
    for (int i = 0; i < 3; i++) {
        if (menor > vals[i])
            menor = vals[i];
    }
    return menor;
}

int main() {
    system("cls");
    SetConsoleOutputCP(65001);

    int a, b, c;

    printf("Informe o valor de 'a': ");
    scanf("%d", &a);
    printf("Informe o valor de 'b': ");
    scanf("%d", &b);
    printf("Informe o valor de 'c': ");
    scanf("%d", &c);

    printf("%d é o menor", menorDe3(a, b, c));

    return 0;
}