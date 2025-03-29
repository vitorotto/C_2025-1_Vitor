/*
    A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um programa que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas). 
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");

    float hrTrab, sal;
    
    printf("Insira a quantidade de horas que o funcionário trabalhou neste mês: ");
    scanf("%f", &hrTrab);

    printf("Escreva quanto o funcioário recebe por hora trabalhada: ");
    scanf("%f", &sal);

    

    if (hrTrab < 160) {
        printf("Total a receber: %.2f\n", (sal * hrTrab));
    } else {
        float hrExtra = hrTrab - 160;
        printf("total a receber: %.2f\n", ((sal * hrTrab) + (hrExtra * 0.5)));
    }
    
    return 0;
}