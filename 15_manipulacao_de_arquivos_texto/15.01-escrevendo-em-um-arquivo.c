#include <stdio.h>
#include <stdlib.h>
#include "avaliador.h"

int main(){

    FILE *arq;

    arq = fopen("mensagem.txt", "w+");

    if(arq == NULL){
        printf("Erro no arquivo");
        return 1;
    }

    char name[100];
    scanf(" %s", name);
    fprintf(arq, "%s\n", name);

    rewind(arq);
    //system("cls");

    //fscanf(arq, "%s", name);
    //printf("%s\n", name);

    fclose(arq);

    arquivo_finalizado("mensagem.txt");
    return 0;
}
