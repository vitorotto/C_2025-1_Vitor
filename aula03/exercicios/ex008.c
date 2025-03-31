/*
    Escreva um programa que lê a hora de início e de término de um jogo e calcule a duração do jogo. Sabendo-se que serão lidos apenas horas inteiras, que o jogo pode durar no máximo 24 horas e ele pode iniciar em um dia e terminar em outro
*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int inicio, final;
    printf("Insira o horário de início do jogo: ");
    scanf("%d", &inicio);
    printf("Insira o horário que o jogo acabou: ");
    scanf("%d", &final);

    int duracao = final - inicio;
    if (final == inicio) {
        printf("O jogo durou 24 horas");
    }else if (final < inicio || duracao < 0) { // Se o final for menor que o inicio, significa que o dia é outro e então a duração será um valor negativo
        printf("A duração da partida foi: %d horas", (24 + duracao)); // somando 24 horas com a duração negativa, obtemos o total de horas que o jogo durou

        /*
            EXPLICAÇÃO:
            A duração é a diferença entre o final da partida e o ínicio, se o final for menor que o inicio, significa que o jogo chegou no segundo dia, independente da hora.

            Pode ter sido iniciado as 23hrs e terminado a 1hr, a diferença entre 23hrs e 1hr é calculada da seguinte forma:

                1 - 23 = -22
            
            No entanto o jogo não pode durar -22 horas. Para saber a duração da partida nos casos em que a diferença é negativa, ou seja, o dia trocou, devemos seguir mais um passo:

                24 + (-22) = 2

            Assim obtemos a duração da partida nos casos em que o dia trocou (quando o horario de final é MENOR que o de inicio)
        */
       
    } else {
        printf("A duração da partida foi: %d horas", duracao);
    }

    return 0;
}