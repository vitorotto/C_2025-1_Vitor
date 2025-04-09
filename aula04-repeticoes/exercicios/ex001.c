#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    system("cls");

    int cont = 1;
    while (cont <= 10) {
        printf("%d\n", cont++);
    }
}