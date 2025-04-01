/*
    Escrever um programa que lê a identificação de um aluno (número) e as 3 notas obtidas 
    por  ele  bem  com  a  média  dos  exercícios.  Para  cada  aluno  calcular  a  média  de 
    aproveitamento usando a fórmula

    MA = (N1 + N2 * 2 + N3 * 3 + Me) / 7

    Com base na média obtida atribua um conceito com base na tabela abaixo

    Média de aproveitamento  Conceito 
                >=9           A 
                >=7 e < 9     B 
                >=6 e < 7     C 
                >=4 e < 6     D 
                < 4           E

    No final o programa deve mostrar o código do aluno, suas notas, a média dos exercícios, 
    o conceito e se o aluno está Aprovado (Conceito A, B ou C) e Reprovado (D e E)
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main() {
    SetConsoleOutputCP(65001);
    system("clear");

    int idAluno;
    printf("Informe o Id do aluno: ");
    scanf("%d", &idAluno);

    float n1, n2, n3;
    printf("Informe a nota 01 do aluno: ");
    scanf("%f", &n1);
    printf("Informe a nota 02 do aluno: ");
    scanf("%f", &n2);
    printf("Informe a nota 03 do aluno: ");
    scanf("%f", &n3);

    // Regra de negocio
    
    
    return 0;
}