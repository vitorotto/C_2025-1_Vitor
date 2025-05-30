/*
Jogo da Forca Simplificado: Crie um programa que implemente uma versão simplificada do jogo da forca. O programa deve:
Escolher uma palavra secreta de uma lista predefinida.
Mostrar ao jogador a palavra secreta com letras ocultas (por exemplo, "_____").
Permitir que o jogador chute uma letra por vez.
Atualizar a exibição da palavra secreta mostrando as letras corretas chutadas.
Manter o controle do número de tentativas restantes.
Informar ao jogador se ele acertou a palavra ou perdeu.
*/

#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");
    srand(time(NULL));

    char palavra01[] = "uva";
    char palavra02[] = "pera";
    char palavra03[] = "banana";
    char forca[50];

    // Sorteando a palavra
    int iPalavra = rand()%3;
    printf("%d", iPalavra);

    switch (iPalavra)
    {
    case 1:
        int i = 0;
        while (palavra01[i] != '\0') {
            forca[i] = palavra01[i];
            i++;
        }
        forca[i] = '\0';
        break;
    case 2:
        int i = 0;
        while (palavra02[i] != '\0') {
            forca[i] = palavra02[i];
            i++;
        }
        forca[i] = '\0';
        break;
    case 3: {
        int i = 0;
        while (palavra03[i] != '\0') {
            forca[i] = palavra03[i];
            i++;
        }
        forca[i] = '\0';
    }
        break;
    
    default:
        printf("Erro");
        break;
       
    }

    printf("Palavra sorteada: \n");
    for (int i = 0; forca[i] != '\0'; i++) {
        printf("%c", forca[i]);
    }

    return 0;
}