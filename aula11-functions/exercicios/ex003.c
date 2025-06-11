//Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'
//Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma equação do 2o grau: ax² + bx + c=0
//Para ela existir, o coeficiente 'a' deve ser diferente de zero.
//Caso o delta seja maior ou igual a zero, as raízes serão reais. Caso o delta seja negativo, as reais serão complexas, apenas informe que não existem raízes racionais 

//Ex: 2x² + 4x - 6=0 tem raízes 1 e -3

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
// #include<stdlib.h>

float r1, r2;

void bask(double a, double b, double c) {

    float delta = (b * b) - (4 * a * c);

    if (a == 0) {
        printf("'A' deve ser diferente de 0");
    }
    else if (delta < 0) {
        printf("Não existem raízes reais");
    } else {
        r1 = ((-b) + (sqrt(delta))) / (2 * a);
        r2 = ((-b) - (sqrt(delta))) / (2 * a);
        printf("r1: %.2f, r2: %.2f", r1, r2);
    }
}

int main() {
    // system("cls");
    SetConsoleOutputCP(65001);
    double a, b, c;
    printf("Informe um valor: ");
    scanf("%lf", &a);
    printf("Informe um valor: ");
    scanf("%lf", &b);
    printf("Informe um valor: ");
    scanf("%lf", &c);

    bask(a, b, c);
    return 0;
}