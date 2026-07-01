#include <stdio.h>
#include <stdlib.h>

int main(){

    char arquivo[50];
    scanf("%s", arquivo);

    FILE *arq = fopen(arquivo, "rb");
    if(arq == NULL){
        printf("Erro no arquivo.");
        return 1;
    }

    int num;
    int contador = 0;
    while((num = fgetc(arq)) != EOF){
        if(contador % 16 == 0){
            printf("%02x", num);
        }else{
            printf(" %02x", num);
        }
        contador++;
        if (contador % 16 == 0) {
            printf("\n");
        }
    }
    return 0;
}
