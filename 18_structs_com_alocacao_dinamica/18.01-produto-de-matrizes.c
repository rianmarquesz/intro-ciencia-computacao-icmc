#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void obter_dimensoes(const char *nome_arq, int *linhas, int *colunas) {
    FILE *f = fopen(nome_arq, "r");
    if (!f) {
        *linhas = 0;
        *colunas = 0;
        return;
    }

    int l = 0, c = 0, total_elementos = 0;
    char ch;
    int num;
    int na_linha = 0;

    while (fscanf(f, "%d", &num) == 1) {
        total_elementos++;
        na_linha++;

        while ((ch = fgetc(f)) != EOF) {
            if (ch == '\n') {
                l++;
                if (c == 0) c = na_linha;
                na_linha = 0;
                break;
            } else if (ch != ' ' && ch != '\r' && ch != '\t') {
                ungetc(ch, f);
                break;
            }
        }
    }

    if (na_linha > 0) {
        l++;
        if (c == 0) c = na_linha;
    }

    fclose(f);
    *linhas = l;
    *colunas = c;
}

int** alocar_matriz(int linhas, int colunas) {
    int **mat = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        mat[i] = (int *)malloc(colunas * sizeof(int));
    }
    return mat;
}

void liberar_matriz(int **mat, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(mat[i]);
    }
    free(mat);
}

void carregar_matriz(const char *nome_arq, int **mat, int linhas, int colunas) {
    FILE *f = fopen(nome_arq, "r");
    if (!f) return;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (fscanf(f, "%d", &mat[i][j]) != 1) {
                mat[i][j] = 0;
            }
        }
    }
    fclose(f);
}

int main() {
    int id1, id2;
    if (scanf("%d %d", &id1, &id2) != 2) return 0;

    char nome1[20], nome2[20];
    sprintf(nome1, "%d.txt", id1);
    sprintf(nome2, "%d.txt", id2);

    int l1, c1, l2, c2;
    obter_dimensoes(nome1, &l1, &c1);
    obter_dimensoes(nome2, &l2, &c2);

    if (c1 != l2 || l1 == 0 || c1 == 0 || l2 == 0 || c2 == 0) {
        printf("Produto Inexistente\n");
        return 0;
    }

    int **mat1 = alocar_matriz(l1, c1);
    int **mat2 = alocar_matriz(l2, c2);

    carregar_matriz(nome1, mat1, l1, c1);
    carregar_matriz(nome2, mat2, l2, c2);

    int **res = alocar_matriz(l1, c2);

    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    liberar_matriz(mat1, l1);
    liberar_matriz(mat2, l2);
    liberar_matriz(res, l1);

    return 0;
}
