#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int pontos;
    int golsMarcados;
    int golsSofridos;
} Selecao;

int main() {
    int q;
    if (scanf("%d", &q) != 1) return 0;

    Selecao *selecoes = NULL;
    int total_selecoes = 0;

    char operacao[20];

    for (int k = 0; k < q; k++) {
        if (scanf(" %19s", operacao) != 1) break;

        if (strcmp(operacao, "load") == 0) {
            char nome_arquivo[100];
            scanf(" %99s", nome_arquivo);

            FILE *f = fopen(nome_arquivo, "r");
            if (f == NULL) {
                printf("Arquivo %s Indexistente\n", nome_arquivo);
            } else {
                int n;
                if (fscanf(f, "%d", &n) == 1) {
                    for (int i = 0; i < n; i++) {
                        char nome_sel[50];
                        int p, gm, gs;
                        fscanf(f, " %49s %d %d %d", nome_sel, &p, &gm, &gs);

                        int encontrado = -1;
                        for (int j = 0; j < total_selecoes; j++) {
                            if (strcmp(selecoes[j].nome, nome_sel) == 0) {
                                encontrado = j;
                                break;
                            }
                        }

                        if (encontrado != -1) {
                            selecoes[encontrado].pontos = p;
                            selecoes[encontrado].golsMarcados = gm;
                            selecoes[encontrado].golsSofridos = gs;
                        } else {
                            selecoes = (Selecao *)realloc(selecoes, (total_selecoes + 1) * sizeof(Selecao));
                            strcpy(selecoes[total_selecoes].nome, nome_sel);
                            selecoes[total_selecoes].pontos = p;
                            selecoes[total_selecoes].golsMarcados = gm;
                            selecoes[total_selecoes].golsSofridos = gs;
                            total_selecoes++;
                        }
                    }
                }
                fclose(f);
                printf("Arquivo %s Carregado\n", nome_arquivo);
            }

        } else if (strcmp(operacao, "consulta") == 0) {
            char nome_sel[50];
            char atributo[30];
            scanf(" %49s %29s", nome_sel, atributo);

            int escolha = 0;
            if (strcmp(atributo, "pontos") == 0) escolha = 1;
            else if (strcmp(atributo, "saldo") == 0) escolha = 2;
            else if (strcmp(atributo, "gols_sofridos") == 0) escolha = 3;
            else if (strcmp(atributo, "gols_marcados") == 0) escolha = 4;

            if (escolha == 0) {
                printf("Consulta Invalida\n");
            } else {
                int encontrado = -1;
                for (int j = 0; j < total_selecoes; j++) {
                    if (strcmp(selecoes[j].nome, nome_sel) == 0) {
                        encontrado = j;
                        break;
                    }
                }

                if (encontrado == -1) {
                    printf("Consulta Invalida\n");
                } else {
                    switch (escolha) {
                        case 1:
                            printf("%d\n", selecoes[encontrado].pontos);
                            break;
                        case 2:
                            printf("%d\n", selecoes[encontrado].golsMarcados - selecoes[encontrado].golsSofridos);
                            break;
                        case 3:
                            printf("%d\n", selecoes[encontrado].golsSofridos);
                            break;
                        case 4:
                            printf("%d\n", selecoes[encontrado].golsMarcados);
                            break;
                    }
                }
            }
        }
    }

    if (selecoes != NULL) {
        free(selecoes);
    }
    return 0;
}
