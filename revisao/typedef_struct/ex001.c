// Biblioteca: Use typedef para definir uma struct Livro com título, autor e ano. Leia 3 livros e mostre os títulos dos que foram publicados após 2010.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamVetor = 2;

typedef struct
{
    char livro[25];
    char autor[30];
    int ano;
} Livro;

int main()
{
    system("clear");

    Livro vetLivros[tamVetor];

    for (int i = 0; i < tamVetor; i++)
    {
        printf("\nInsira o nome do livro %d: ", i);
        fgets(vetLivros[i].livro, sizeof(vetLivros[i].livro), stdin);
        vetLivros[i].livro[strcspn(vetLivros[i].livro, "\n")] = 0;
        setbuf(stdin, NULL);
        printf("\nInforme o nome do autor do livro \"%s\" :", vetLivros[i].livro);
        fgets(vetLivros[i].autor, sizeof(vetLivros[i].autor), stdin);
        vetLivros[i].autor[strcspn(vetLivros[i].autor, "\n")] = 0;
        setbuf(stdin, NULL);
        printf("\nInforme o ano de lançamento do livro: ");
        scanf("%d", &vetLivros[i].ano);
        setbuf(stdin, NULL);
    }

    char opc = 'N';
    printf("Deseja exibir todos os livros? (S/N)");
    scanf("%c", &opc);
    setbuf(stdin, NULL);
    if (opc == 'S' || opc == 's')
    {
        printf("\nLIVROS CADASTRADOS ---------------------");
        for (int i = 0; i < tamVetor; i++)
        {
            printf("\nLivro: %s", vetLivros[i].livro);
            printf("\nAutor: %s", vetLivros[i].autor);
            printf("\nAno: %d", vetLivros[i].ano);
            printf("\n----------------------------");
        }
    }

    int filtro;
    printf("\nInforme o filtro de ano: (ex: 2010)");
    scanf("%d", &filtro);

    printf("\nLIVROS CADASTRADOS ---------------------");

    int indice = 0;
    while (indice < tamVetor)
    {
        if (vetLivros[indice].ano > filtro)
        {
            printf("\nLivro: %s", vetLivros[indice].livro);
            printf("\nAutor: %s", vetLivros[indice].autor);
            printf("\nAno: %d", vetLivros[indice].ano);
            printf("\n----------------------------");
            
        }
        indice++;
    }

    return 0;
}