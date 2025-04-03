/*
    Localização  de  Ponto  no  Plano  Dados  um  par  de  valores  X,  Y,  que  representam  as 
    coordenadas de um ponto no plano cartesiano, determinar a localização do ponto, se em 
    um quadrante, um dos eixos ou na origem.
*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    float x, y;
    printf("Informe o valor de X: ");
    scanf("%f", &x);
    printf("Informe o valor de Y: ");
    scanf("%f", &y);

    if (x == 0) {
        if (y == 0) {
            printf("Na origem");
        } else {
            printf("No eixo Y");
        }
    } else if (y == 0) {
        if (x == 0) {
            printf("Na origem");
        } else {
            printf("No eixo X");
        }
    } else {
        if (x < 0) {
            if (y < 0) {
                printf("No terceiro quadrante");
            } else {
                printf("No primeiro quadrante");
            }
        } else {
            if (y < 0) {
                printf("No quarto quadrante");
            } else {
                printf("No segundo quadrante");
            }
        }
    }

    return 0;
}