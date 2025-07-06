/* Média de 3 valores com ponteiro: Crie uma função que receba três ponteiros para inteiros e retorne a média dos valores apontados. */

#include<stdio.h>
#include<stdlib.h>

float media(int *a, int *b, int *c) {
    return ((*a + *b + *c) / (float) 3 );
}

int main() {
    system("clear");
    int a = 10;
    int b = 3;
    int c = 7;
    printf("%.2f\n", media(&a, &b, &c));
    return 0;
}