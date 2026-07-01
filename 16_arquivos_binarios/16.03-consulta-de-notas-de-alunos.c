#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double P1;
    double P2;
    char nome[56];
}Aluno;

int main(){
    int pos;
    scanf("%d", &pos);

    FILE *arq = fopen("alunos.bin", "rb");
    if(arq == NULL){
        printf("Erro ao abrir");
        return 1;
    }
    fseek(arq, pos*sizeof(Aluno), SEEK_SET);

    Aluno aluno;
    fread(&aluno, sizeof(Aluno), 1, arq);

    printf("Nome: %s - P1: %.2f - P2: %.2f",
           aluno.nome, aluno.P1, aluno.P2);

    fclose(arq);

    return 0;
}
