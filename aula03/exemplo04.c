#include<stdio.h>
#include<stdlib.h>

int main() {
    system("clear");
    int val;
    printf("Informe o valor: ");
    scanf("%d", &val);

    if (val >= 10)
        printf("O valor é maior ou igual a 10");
    else
        printf("O valor é menor que 10");
}