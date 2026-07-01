#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arqA;
    FILE *arqB;
    char palavra[256];
    int linha;

    scanf("%d", &linha);

    arqA = fopen("notas1.txt", "a+");
    if(arqA == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    arqB = fopen("notas2.txt", "r");
    if(arqB == NULL){
        printf("Erro ao abrir arquivo");
        fclose(arqA);
        return 1;
    }


    while(fgets(palavra, sizeof(palavra), arqB) != NULL){
        fprintf(arqA, "%s", palavra);
    }

    fprintf(arqA, "\n");

    fclose(arqA);
    fclose(arqB);

    arqA = fopen("notas1.txt", "r");
    if(arqA == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    for(int i = 0; i <= linha; i++){
        if(fgets(palavra, sizeof(palavra), arqA) == NULL){
            printf("Indice fora da lista de alunos.");
            fclose(arqA);
            return 1;
        }
    }

    char name[50];
    double numA;
    double numB;
    double media;

    sscanf(palavra, "%[^,], %lf, %lf", name, &numA, &numB);
    media = (numA + numB) / 2;

    printf("%s - %.2f", name, media);
    fclose(arqA);

    return 0;
}
