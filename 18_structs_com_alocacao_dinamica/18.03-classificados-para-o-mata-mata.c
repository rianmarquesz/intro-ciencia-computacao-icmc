#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int vitorias;
    int empates;
    int pontos;
} Selecao;

int calcular_pontos(int vitorias, int empates) {
    return (vitorias * 3) + empates;
}

int determinar_lider(Selecao *selecoes, int n) {
    int indice_lider = 0;
    int maior_pontuacao = selecoes[0].pontos;

    for (int i = 1; i < n; i++) {
        if (selecoes[i].pontos > maior_pontuacao) {
            maior_pontuacao = selecoes[i].pontos;
            indice_lider = i;
        }
    }
    return indice_lider;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    Selecao *selecoes = (Selecao *)malloc(n * sizeof(Selecao));
    if (selecoes == NULL) return 1;

    for (int i = 0; i < n; i++) {
        scanf(" %49s %d %d", selecoes[i].nome, &selecoes[i].vitorias, &selecoes[i].empates);
        selecoes[i].pontos = calcular_pontos(selecoes[i].vitorias, selecoes[i].empates);
    }

    int idx_lider = determinar_lider(selecoes, n);
    double limite_classificacao = selecoes[idx_lider].pontos * 0.8;

    for (int i = 0; i < n; i++) {
        if (selecoes[i].pontos >= limite_classificacao) {
            printf("%s\n", selecoes[i].nome);
        }
    }

    free(selecoes);
    return 0;
}
