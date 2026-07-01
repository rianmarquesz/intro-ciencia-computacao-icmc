#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int num;
    double soma = 0;
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));
    if(vetor == NULL){
        printf("Erro de memoria.");
        return 1;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", (vetor + i));
        soma += *(vetor + i);
    }

    printf("%.2f", soma / n );
    free(vetor);
    vetor = NULL;

    return 0;
}
