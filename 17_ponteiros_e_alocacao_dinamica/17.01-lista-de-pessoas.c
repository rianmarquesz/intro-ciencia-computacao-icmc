#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pessoa {
    char *nome;
    int idade;
    struct pessoa *anterior;
} Pessoa;

int main() {
    Pessoa *atual = NULL;
    char linha[120];

    while (1) {
        if (fgets(linha, sizeof(linha), stdin) == NULL) {
            break;
        }

        linha[strcspn(linha, "\r\n")] = '\0';

        if (strcmp(linha, "0") == 0) {
            break;
        }

        char *token_nome = strtok(linha, ",");
        char *token_idade = strtok(NULL, ",");

        if (token_nome != NULL && token_idade != NULL) {
            Pessoa *nova = (Pessoa *)malloc(sizeof(Pessoa));
            if (nova == NULL) return 1;

            nova->nome = (char *)malloc((strlen(token_nome) + 1) * sizeof(char));
            if (nova->nome == NULL) {
                free(nova);
                return 1;
            }
            strcpy(nova->nome, token_nome);

            nova->idade = atoi(token_idade);
            nova->anterior = atual;
            atual = nova;
        }
    }

    Pessoa *aux = atual;
    while (aux != NULL) {
        printf("%s (%d)\n", aux->nome, aux->idade);
        aux = aux->anterior;
    }

    while (atual != NULL) {
        Pessoa *temp = atual;
        atual = atual->anterior;
        free(temp->nome);
        free(temp);
    }

    return 0;
}
