#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[101];
    int ano;
    double nota;
} Filme;

int geraLista(Filme *filmes, FILE *arqA);
int ordenaString(const void *a, const void *b);
int ordenaDouble(const void *a, const void *b);

int main() {
    char opcao[20];
    int indice;
    scanf("%s", opcao);
    scanf("%d", &indice);

    Filme *filmes = (Filme *)malloc(100 * sizeof(Filme));
    if (filmes == NULL) {
        printf("Erro de memoria.");
        return 1;
    }

    FILE *arqA = fopen("catalogo.txt", "r");
    if (arqA == NULL) {
        printf("Erro no arquivo.");
        free(filmes);
        return 1;
    }
    int contador = geraLista(filmes, arqA);
    fclose(arqA);

    if (strcmp(opcao, "NOME") == 0) {
        qsort(filmes, contador, sizeof(Filme), ordenaString);
    } else {
        qsort(filmes, contador, sizeof(Filme), ordenaDouble);
    }

    FILE *arqB = fopen("catalogo_ordenado.txt", "w");
    if (arqB == NULL) {
        printf("Erro no arquivo.");
        free(filmes);
        return 1;
    }
    for (int i = 0; i < contador; i++) {
        fprintf(arqB, "%s - %d - %.1f\n", filmes[i].nome, filmes[i].ano, filmes[i].nota);
    }
    fclose(arqB);

    FILE *arqB2 = fopen("catalogo_ordenado.txt", "r");
    if (arqB2 == NULL) {
        printf("Erro no arquivo.");
        free(filmes);
        return 1;
    }

    if (indice < 0 || indice >= contador) {
        printf("INDICE_INVALIDO\n");
        fclose(arqB2);
        free(filmes);
        return 0;
    }

    char linha[256];
    int atual = 0;
    while (fgets(linha, sizeof(linha), arqB2) != NULL) {
        if (atual == indice) {
            linha[strcspn(linha, "\n")] = '\0';
            printf("%s\n", linha);
            break;
        }
        atual++;
    }

    fclose(arqB2);
    free(filmes);
    return 0;
}

int geraLista(Filme *filmes, FILE *arqA) {
    char linha[256];
    int elementos = 0;

    while (fgets(linha, sizeof(linha), arqA) != NULL) {
        linha[strcspn(linha, "\n")] = '\0';
        char *virgula1 = strrchr(linha, ',');
        if (virgula1 == NULL) continue;
        *virgula1 = '\0';
        double nota = atof(virgula1 + 1);

        char *virgula2 = strrchr(linha, ',');
        if (virgula2 == NULL) continue;
        *virgula2 = '\0';
        int ano = atoi(virgula2 + 1);

        strcpy(filmes[elementos].nome, linha);
        filmes[elementos].ano = ano;
        filmes[elementos].nota = nota;
        elementos++;
    }
    return elementos;
}

int ordenaString(const void *a, const void *b) {
    const Filme *s1 = (const Filme *)a;
    const Filme *s2 = (const Filme *)b;
    return strcmp(s1->nome, s2->nome);
}

int ordenaDouble(const void *a, const void *b) {
    const Filme *s1 = (const Filme *)a;
    const Filme *s2 = (const Filme *)b;
    if (s1->nota > s2->nota) return -1;
    if (s1->nota < s2->nota) return 1;
    return strcmp(s1->nome, s2->nome);
}
