#include<stdio.h>
#include<stdlib.h>

int main() {
    system("clear");
    int valor;
    printf("Informe o valor: ");
    scanf("%d", &valor);

    if (valor == 0)
        printf("O valor digitado é zero \n");
    else if (valor > 0)
        printf("O valor é maior que zero\n");
    else
        printf("O valor é menor que zero");

}