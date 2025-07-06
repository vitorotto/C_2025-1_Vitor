/* Troca de valores: Implemente uma função trocar(int *a, int *b) que troque os valores de duas variáveis. */

#include<stdio.h>
#include<stdlib.h>

void trocaNum(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
    //return *a, *b;
}

int main() {
    int a = 1, b = 2;
    trocaNum(&a, &b);
    printf("a: %d / b: %d\n", a, b);
    return 0;
}