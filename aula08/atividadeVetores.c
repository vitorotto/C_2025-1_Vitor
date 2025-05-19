#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main() {
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  clock_t inicio;
  clock_t fim;

  // Alterar o tamanho
  int tamanho = 150000;
  int vb[tamanho];
  int vs[tamanho];
  int vi[tamanho];

  // Gerar tamanho elementos aleatórios para os três vetores
  // Use rand()%2000000 para definir o limite do random
  for (int i = 0; i < tamanho; i++) {
    vb[i] = rand()%2000000;
    vs[i] = vb[i];
    vi[i] = vb[i];
  }

  // Mostrar o vetor se tamanho menor que 100
  if (tamanho < 100) {
    printf("Vetor Desordenado: \n");
    for (int i = 0; i < tamanho; i++) {
      printf("%d ", vb[i]);
    }
  }
  printf("\n");

  // ---------------------------------------------------

  // BUBBLE SORT
  inicio = clock();

  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - i - 1; j++) {
      if (vb[j] > vb[j+1]) {
        int aux = vb[j];
        vb[j] = vb[j + 1];
        vb[j + 1] = aux;
      }
    }
  }

  fim = clock();
  double tempoBubble = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
  // Apresentar o tempo cronometrado para o bubble sort
  printf("\nTempo Bubble Sort = %f\n", tempoBubble);
  // Mostrar o vetor se tamanho menor que 100
  if (tamanho < 100) {
    printf("Vetor VB: \n");
    for (int i = 0; i < tamanho; i++) {
      printf("%d ", vb[i]);
    }
  }
  printf("\n");

  // ------------------------------------------

  // SELECTION SORT
  inicio = clock();

  for (int i = 0; i < tamanho - 1; i++) {
    int min = i;
    for (int j = i + 1; j < tamanho; j++) {
      if (vs[j] < vs[min]) {
        min = j;
      }
    }
    if (min != i) {
      int aux = vs[i];
      vs[i] = vs[min];
      vs[min] = aux;
    }
  }

  fim = clock();
  double tempoSelection = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
  // Apresentar o tempo cronômtrado para o selection sort
  printf("\nTempo Selection Sort = %f\n", tempoSelection);
  // Mostrar o vetor se tamanho menor que 100
  if (tamanho < 100) {
    printf("Vetor VS: \n");
    for (int i = 0; i < tamanho; i++) {
      printf("%d ", vs[i]);
    }
  }
  printf("\n");

  // ------------------------------------------
  
  // INSERTION SORT
  inicio = clock();

  // Algoritmo para insertion sort ordenando o vetor vi
  for (int i = 1; i < tamanho; i++) {
    int chave = vi[i];
    int j = i - 1;
    while (j >= 0 && vi[j] > chave) {
      vi[j + 1] = vi[j];
      j--;
    }
    vi[j + 1] = chave;
  }

  fim = clock();
  double tempoInsertion = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    // Apresentar o tempo cronômtrado para o insertion sort
  printf("\nTempo Insertion Sort = %f\n", tempoInsertion);
  // Mostrar o vetor se tamanho menor que 100
  if (tamanho < 100) {
    printf("Vetor VI: \n");
    for (int i = 0; i < tamanho; i++) {
      printf("%d ", vi[i]);
    }
  }
  printf("\n");

  // ------------------------------------------

  return 0;
}