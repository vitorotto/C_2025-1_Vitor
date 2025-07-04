/*Modelo (string)
Placa (string)
Quilometragem total (kmTotal): valor acumulado de quilômetros rodados
Quilometragem desde a última revisão (kmRevisao): deve ser zerado sempre que o veículo passar por uma revisão
Status do veículo (emUso): um booleano que indica se o veículo está fora da garagem ou disponível na garagem*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  char modelo[50];
  char placa[10];
  float KmTotal;
  int KmRevisao;
  char emUso;
} Carro;

// Menu
void menu() {
    printf("Menu:\n");
    printf("1. Cadastrar veículo\n");
    printf("2. Listar veículos\n");
    printf("3. Atualizar quilometragem\n");
    printf("4. Realizar revisão\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    menu();
    Carro *frota = NULL;
    int opcao;
    int count = 0;
    do {
        scanf("%d", &opcao);
        switch(opcao) {
            case 1: // Cadastrar veículo
                frota = realloc(frota, (count + 1) * sizeof(Carro));
                if (frota == NULL) {
                    printf("Erro ao alocar memória.\n");
                    return 1;
                }
                printf("Digite o modelo do veículo: ");
                scanf("%s", frota[count].modelo);
                printf("Digite a placa do veículo: ");
                scanf("%s", frota[count].placa);
                printf("Digite a quilometragem do veículo: ");
                scanf("%f", &frota[count].KmTotal);
                frota[count].KmRevisao = 0; // Inicialmente, quilometragem desde a última revisão é zero
                frota[count].emUso = 'N'; // Inicialmente não está em uso
                count++;
                break;
            case 2: // Listar veículos
                for (int i = 0; i < count; i++) {
                    printf("Modelo: %s, Placa: %s, Km Total: %.2f, Km Revisão: %d, Em Uso: %c\n",
                           frota[i].modelo, frota[i].placa, frota[i].KmTotal, 
                           frota[i].KmRevisao, frota[i].emUso);
                }
                break;
            case 3: // Atualizar quilometragem
                printf("Digite a placa do veículo para atualizar a quilometragem: ");
                char placa[10];
                scanf("%s", placa);
                for (int i = 0; i < count; i++) {
                    if (strcmp(frota[i].placa, placa) == 0) {
                        float kmAtualizada;
                        printf("Digite a nova quilometragem: ");
                        scanf("%f", &kmAtualizada);
                        frota[i].KmTotal += kmAtualizada; // Atualiza a quilometragem total
                        frota[i].KmRevisao += kmAtualizada; // Atualiza a quilometragem desde a última revisão
                        printf("Quilometragem atualizada com sucesso.\n");
                        break;
                    }
                }
                // exibe o veículo atualizado
                for (int i = 0; i < count; i++) {
                    if (strcmp(frota[i].placa, placa) == 0) {
                        printf("Veículo atualizado: Modelo: %s, Placa: %s, Km Total: %.2f, Km Revisão: %d, Em Uso: %c\n",
                               frota[i].modelo, frota[i].placa, frota[i].KmTotal, 
                               frota[i].KmRevisao, frota[i].emUso); 
                break;
            case 4: // Realizar revisão
                printf("Digite a placa do veículo para realizar revisão: ");
                scanf("%s", placa);
                for (int i = 0; i < count; i++) {
                    if (strcmp(frota[i].placa, placa) == 0) {
                        frota[i].KmRevisao = 0; // Zera a quilometragem desde a última revisão
                        printf("Revisão realizada com sucesso.\n");
                        break;
                    }
                }
                break;
            case 5: // Sair
                printf("Saindo do programa.\n");
                free(frota); // Libera a memória alocada
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
            }
        }
    }
    menu(); // Exibe o menu novamente após cada ação
    } while (opcao != 5);
    
    return 0;
}


