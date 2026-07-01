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
    int qtd;
    if (scanf("%d", &qtd) != 1) return 1;

    Selecao *selecao = (Selecao *)malloc(qtd * sizeof(Selecao));
    if (selecao == NULL) return 1;

    for (int i = 0; i < qtd; i++) {
        scanf(" %49s %d %d %d",
              selecao[i].nome, &selecao[i].pontos, &selecao[i].golsMarcados, &selecao[i].golsSofridos);
    }

    int q;
    if (scanf("%d", &q) != 1) {
        free(selecao);
        return 1;
    }

    char opcaoA[50];
    char opcaoB[50];

    for (int j = 0; j < q; j++) {
        scanf(" %49s %49s", opcaoA, opcaoB);

        int escolha = 0;
        if (strcmp(opcaoB, "pontos") == 0) {
            escolha = 1;
        } else if (strcmp(opcaoB, "saldo") == 0) {
            escolha = 2;
        } else if (strcmp(opcaoB, "gols_sofridos") == 0) {
            escolha = 3;
        } else if (strcmp(opcaoB, "gols_marcados") == 0) {
            escolha = 4;
        }

        for (int i = 0; i < qtd; i++) {
            if (strcmp(selecao[i].nome, opcaoA) == 0) {
                switch (escolha) {
                    case 1:
                        printf("%d\n", selecao[i].pontos);
                        break;
                    case 2:
                        printf("%d\n", selecao[i].golsMarcados - selecao[i].golsSofridos);
                        break;
                    case 3:
                        printf("%d\n", selecao[i].golsSofridos);
                        break;
                    case 4:
                        printf("%d\n", selecao[i].golsMarcados);
                        break;
                }
                break;
            }
        }
    }

    free(selecao);
    return 0;
}
