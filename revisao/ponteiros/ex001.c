/* Dobro com ponteiro: Escreva uma função que receba um ponteiro para um inteiro e dobre o valor contido nele. */

#include<stdio.h>
#include<stdlib.h>



int Dobro(int *val) {
    return *val * 2;
}

int main() {
    int val = 100;
    printf("%d\n", Dobro(&val));
    return 0;
}