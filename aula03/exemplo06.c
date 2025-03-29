#include<stdio.h>
// #include<stdlib.h>

int main() {
    system("clear");
    int opcDia;
    printf("Escolha um dia da semana de 1 a 7: ");
    scanf("%d", &opcDia);
    // Switch (var) {}
    switch (opcDia) {
        case 1:
            printf("É domingo\n");
            break;
        case 2:
            printf("É segunda\n");
            break;
        case 3:
            printf("É terça\n");
            break;
        case 4:
            printf("É quarta\n");
            break;
        case 5:
            printf("É quinta\n");
            break;
        case 6:
            printf("É sexta\n");
            break;
        case 7:
            printf("É sábado\n");
            break;
        default:
            printf("O número %d não é uma opção váida para o dia da semana\n", opcDia);
    }

}