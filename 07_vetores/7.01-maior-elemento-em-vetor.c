#include <stdio.h>

int main(){

    int lista[8];

    for(int i = 0; i < 8; i++){
        scanf("%d", &lista[i]);
    }

    for(int i = 0; i < 8; i++){
        printf("%d ", lista[i]);
    }

    int maiorValor = lista[0];
    int maiorIndice = 0;

    for(int i = 1; i < 8; i++){
        if(lista[i] > maiorValor){
            maiorValor = lista[i];
            maiorIndice = i;
        }
    }

    printf("\n");
    printf("%d\n", maiorValor);
    printf("%d", maiorIndice);
    return 0;
}
