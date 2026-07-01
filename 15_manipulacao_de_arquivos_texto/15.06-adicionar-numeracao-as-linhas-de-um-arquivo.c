#include "avaliador.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq;
    FILE *arqCopia;

    char arquivo[50];
    char linha[100];
    int num = 1;

    fgets(arquivo, 50, stdin);
    arquivo[strcspn(arquivo, "\n\r")] = '\0';

    arq = fopen(arquivo, "r");
    if(arq == NULL){
        printf("Erro no arquivo");
        return 1;
    }

    arqCopia = fopen("poema_numerado.txt", "w+");
    if(arqCopia == NULL){
        printf("Erro no arquivo");
        return 1;
    }

    while(fgets(linha, sizeof(linha), arq) != NULL){
        fprintf(arqCopia, "%03d: %s", num, linha);
        num++;
    }

    fclose(arq);
    fclose(arqCopia);

    arquivo_finalizado("poema_numerado.txt");
    return 0;
}
