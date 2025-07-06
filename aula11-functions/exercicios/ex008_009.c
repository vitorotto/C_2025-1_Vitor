// Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dado() {
    srand(time(NULL));
    int result = rand()%6;
    while (result == 0) {
        result = rand()%6;
    }
    return result;
}

int main() {
    // Ex008
    printf("%d\n", dado());
    return 0;

    // Ex009
    /* Use a função da questão passada e lance o dado 1 milhão de vezes. Conte quantas vezes cada número saiu. A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida? */
}