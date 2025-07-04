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
    printf("3. Registrar saída\n");
    printf("4. Registrar entrada\n");
    printf("5. Realizar revisão\n");
    printf("6. Sair\n");a
    printf("\nEscolha uma opção: ");
}
int verificaSeListaVazia(int count) {
    return count == 0; // Retorna 1 se a lista estiver vazia
}

int verificaSeTodosEmUso(Carro *frota, int count) {
    for (int i = 0; i < count; i++) {
        if (frota[i].emUso == 'N') {
            return 0; // Existe algum veículo disponível
        }
    }
    return 1; // Todos os veículos estão em uso
}

int main() {
    system("clear");
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
                frota[count].KmRevisao = 0;
                frota[count].emUso = 'N';
                count++;

                printf("\nVeículo cadastrado com sucesso.\n");

                break;
            case 2: // Listar veículos

                if (verificaSeListaVazia(count)) {
                    printf("\nNenhum veículo cadastrado.\n");
                    break;
                }

                printf("\nLista de veículos:\n");
                for (int i = 0; i < count; i++) {
                    printf("Modelo: %s, Placa: %s, Km Total: %.2f, Km Revisão: %d, Em Uso: %c\n",
                           frota[i].modelo, frota[i].placa, frota[i].KmTotal, 
                           frota[i].KmRevisao, frota[i].emUso);
                }
                break;
            case 3: // Registrar saída
                printf("\n");
                printf("Registrar saída de veículo:\n");

                if (verificaSeListaVazia(count)) {
                    printf("\nNenhum veículo cadastrado.\n");
                    break;
                }

                // Verificando se todos os veículos estão em uso
                if (verificaSeTodosEmUso(frota, count)) {
                    printf("\nTodos os veículos estão em uso. Não é possível realizar saída.\n");
                    break;
                }

                // Veiculos na garagem
                printf("\nVeículos na garagem:\n");
                for (int i = 0; i < count; i++) {
                    if (frota[i].emUso == 'N') {
                        printf("Modelo: %s, Placa: %s, Km Total: %.2f, Km Revisão: %d\n",
                               frota[i].modelo, frota[i].placa, 
                               frota[i].KmTotal, frota[i].KmRevisao);
                    }
                }
                // Registrar saída
                printf("\nDigite a placa do veículo para registrar a saída: ");
                char placa[10];
                scanf("%s", placa);
                for (int i = 0; i < count; i++) {
                    if (strcmp(frota[i].placa, placa) == 0) {
                        if (frota[i].emUso == 'N') {
                            if (frota[i].KmRevisao >= 10000) { // Verifica se o veículo precisa de revisão
                                printf("\nO veículo precisa passar por revisão antes de sair.\n");
                                break;
                            } else {
                                frota[i].emUso = 'S';
                                printf("\nSaída registrada com sucesso.\n");
                            }
                        } else {
                            printf("\nO veículo já está fora da garagem.\n");
                        }
                        break;
                    }
                }
                break;
            case 4: // Registrar entrada
                printf("\n");
                printf("Registrar entrada de veículo:\n");

                if (verificaSeListaVazia(count)) {
                    printf("\nNenhum veículo cadastrado.\n");
                    break;
                }

                // Verificando se não existe nenhum veículo fora da garagem
                if (!verificaSeTodosEmUso(frota, count)) {
                    printf("\nTodos estão na garagem. Não é possível registrar a entrada.\n");
                    break;
                }

                // Veiculos fora da garagem
                printf("\nVeículos fora da garagem:\n");
                for (int i = 0; i < count; i++) {
                    if (frota[i].emUso == 'S') {
                        printf("Modelo: %s, Placa: %s, Km Total: %.2f, Km Revisão: %d\n",
                               frota[i].modelo, frota[i].placa, 
                               frota[i].KmTotal, frota[i].KmRevisao);
                    }
                }
                // Registrar entrada
                printf("\nDigite a placa do veículo para registrar a entrada: ");
                scanf("%s", placa);
                printf("Digite a quilometragem rodada do veículo: ");
                float kmRodada;
                scanf("%f", &kmRodada);
                for (int i = 0; i < count; i++) {
                    if (strcmp(frota[i].placa, placa) == 0) {
                        if (frota[i].emUso == 'S') {
                            frota[i].KmTotal += kmRodada; // Atualiza a quilometragem total
                            frota[i].KmRevisao += frota[i].KmTotal; // Atualiza a quilometragem desde a última revisão
                            frota[i].emUso = 'N';
                            printf("\nEntrada registrada com sucesso.\n");
                        } else {
                            printf("\nO veículo já está na garagem.\n");
                        }
                        break;
                    }
                }
                break;
            case 5: // Realizar revisão
                printf("\n");
                printf("Realizar revisão de veículo:\n");

                if (verificaSeListaVazia(count)) {
                    printf("\nNenhum veículo cadastrado.\n");
                    break;
                }

                // Verificando se todos os veículos estão em uso
                if (verificaSeTodosEmUso(frota, count)) {
                    printf("\nTodos os veículos estão em uso. Não é possível realizar revisão.\n");
                    break;
                }
                printf("Digite a placa do veículo para realizar revisão: ");
                scanf("%s", placa);
                for (int i = 0; i < count; i++) {
                    if (strcmp(frota[i].placa, placa) == 0 && frota[i].emUso == 'N') {
                        frota[i].KmRevisao = 0;
                        printf("\nRevisão realizada com sucesso.\n");
                        break;
                    } else {
                        if (strcmp(frota[i].placa, placa) == 0 && frota[i].emUso == 'S') {
                            printf("\nO veículo está em uso. Não é possível realizar a revisão.\n");
                            break;
                        }
                    }
                }
                break;
            case 6: // Sair
                printf("\nSaindo do programa.\n");
                free(frota);
                break;
            default:
                printf("\nOpção inválida. Tente novamente.\n");
                break;
        }
        if (opcao != 6) {
            printf("\n");
        }
    menu(); // Exibe o menu denovo
    } while (opcao != 6);
    
    return 0;
}


