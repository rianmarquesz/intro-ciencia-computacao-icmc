#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int id;
char nome[50];
float preco;
}Produto;

int main(){

    int ind;
    scanf("%d", &ind);

    FILE *arqA = fopen("produtos.bin", "rb");
    if(arqA == NULL){
        printf("Erro no arquivo.");
        return 1;
    }
    Produto produto[50];
    Produto produtoLimpo[50];
    int i = 0;
    int j = 0;

    while(fread(&produto[i], sizeof(Produto), 1, arqA) == 1){
        if(strcmp(produto[i].nome, "N/D") != 0 && produto[i].preco >= 0){
            produtoLimpo[j].id = produto[i].id;
            strcpy(produtoLimpo[j].nome, produto[i].nome);
            produtoLimpo[j].preco = produto[i].preco;
            j++;
        }
        i++;
    }

    fclose(arqA);

    FILE *arqB = fopen("produtos_limpo.bin", "wb");
    if(arqB == NULL){
        printf("Erro no arquivo.");
    }
    i = 0;
    int flag = 0;
    for(i = 0; i < j; i++){

        fwrite(&produtoLimpo[i], sizeof(Produto), 1, arqB);

        if(ind == i){
            printf("%d - %s - %.2f",
            produtoLimpo[i].id, produtoLimpo[i].nome, produtoLimpo[i].preco);
            flag++;
        }
    }
    fclose(arqB);

    if(flag == 0){
        printf("INDICE_INVALIDO");
    }
    return 0;
}
