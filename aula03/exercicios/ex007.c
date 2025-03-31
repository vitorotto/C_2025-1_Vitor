/*
    O departamento que controla o índice de poluição do meio ambiente mantém 3 grupos de indústrias que são altamente poluentes. O nível de poluição aceitável fica entre 0.05 e 0.25. Se o nível de poluição sobe acima de 0.3 empresas do grupo 1 são intimadas a suspender suas atividades. Se o índice atinge 0.4 as indústrias do grupo 1 e 2 são intimadas a suspender suas atividades. Se o índice atingir o nível 0.5 os três grupos devem suspender suas atividades. Escreva o programa que leia o índice de poluição e emita as notificações aos grupos de empresas.
*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    float iPoluicao;
    
    printf("Informe o índice de poluíçao: ");
    scanf("%f", &iPoluicao);

    if (iPoluicao <= 0.05 || iPoluicao <= 0.3) {
        printf("Índice de poluição aceitável.");
    } else if (iPoluicao > 0.3 && iPoluicao < 0.4) {
        printf("O grupo 01 deve suspender as atividades!");
    } else if (iPoluicao >= 0.4 && iPoluicao < 0.5) {
        printf("O grupo 01 e 02 deve suspender suas atividades!");
    } else {
        printf("Todos encerrem as atividades! Estado Crítico!!!!");
    }

    return 0;
}