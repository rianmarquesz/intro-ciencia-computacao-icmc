#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    char palavra[20];
    char linha[20];
    scanf("%s", palavra);

    arq = fopen(palavra, "r");

    for(int i = 0; i < 3; i++){
        fgets(linha, 20, arq);
        printf("%s", linha);
    }

    fclose(arq);

    return 0;
}
