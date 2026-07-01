#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char tipo[20];
    int tamanho;
    unsigned char bytes[10];
}Arquivos;

int main(){

    char nome[101];
    scanf("%s", nome);

    Arquivos tabela[] = {
    {"BMP", 2, {0x42, 0x4D}},
    {"PNG", 8, {0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A}},
    {"GIF", 4, {0x47, 0x49, 0x46, 0x38}},
    {"JPEG", 3, {0xFF, 0xD8, 0xFF}},
    {"PDF", 4, {0x25, 0x50, 0x44, 0x46}},
    {"ZIP", 4, {0x50, 0x4B, 0x03, 0x04}},
    {"ELF", 4, {0x7F, 0x45, 0x4C, 0x46}},
    {"WAV", 4, {0x52, 0x49, 0x46, 0x46}},
    {"MP3", 2, {0xFF, 0xFB}},
    {"MP3", 3, {0x49, 0x44, 0x33}},
    };

    int totalFormatos = sizeof(tabela) / sizeof(tabela[0]);

    FILE *arq = fopen(nome, "rb");
    if(arq == NULL){
        printf("Tipo de arquivo desconhecido\n");
        return 0;
    }

    unsigned char ass[8];
    for(int i = 0; i < 8; i++){
        ass[i] = fgetc(arq);
    }
    fclose(arq);

    int flag = 0;
    for(int i = 0; i < totalFormatos; i++){
        if(memcmp(ass, tabela[i].bytes, tabela[i].tamanho) == 0){
            printf("Arquivo %s\n", tabela[i].tipo);
            flag = 1;
            break;
        }
    }
    if(!flag){
        printf("Tipo de arquivo desconhecido");
    }

    /*char arquivo[101];
    scanf("%s", arquivo);

    unsigned char BMP[] = {0x42, 0x4D};
    unsigned char PNG[] = {0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A};
    unsigned char GIF[] = {0x47, 0x49, 0x46, 0x38};
    unsigned char JPEG[] = {0xFF, 0xD8, 0xFF};
    unsigned char PDF[] = {0x25 ,0x50, 0x44, 0x46};
    unsigned char ZIP[] = {0x50, 0x4B, 0x03, 0x04};
    unsigned char ELF[] = {0x7F, 0x45, 0x4C, 0x46};
    unsigned char WAV[] = {0x52, 0x49, 0x46, 0x46};
    unsigned char MP3A[] = {0xFF, 0xFB};
    unsigned char MP3B[] = {0x49, 0x44, 0x33};

    FILE *arq = fopen(arquivo, "rb");
    if(arq == NULL){
        printf("Tipo de arquivo desconhecido");
        return 1;
    }

    unsigned char assinatura[8];

    for(int i = 0; i < 8; i++){
        assinatura[i] = fgetc(arq);
    }
    fclose(arq);

    if(memcmp(assinatura, BMP, 2) == 0){
        printf("Arquivo BMP\n");
    }else if(memcmp(assinatura, PNG, 8) == 0){
        printf("Arquivo PNG\n");
    }else if(memcmp(assinatura, GIF, 4) == 0){
        printf("Arquivo GIF\n");
    }else if(memcmp(assinatura, JPEG, 3) == 0){
        printf("Arquivo JPEG\n");
    }else if(memcmp(assinatura, PDF, 4) == 0){
        printf("Arquivo PDF\n");
    }else if(memcmp(assinatura, ZIP, 4) == 0){
        printf("Arquivo ZIP\n");
    }else if(memcmp(assinatura, ELF, 4) == 0){
        printf("Arquivo ELF\n");
    }else if(memcmp(assinatura, WAV, 4) == 0){
        printf("Arquivo WAV\n");
    }else if(memcmp(assinatura, MP3A, 2) || memcmp(assinatura, MP3B, 2) == 0){
        printf("Arquivo MP3\n");
    }else{
        printf("Tipo de arquivo desconhecido");
    }
    */
    return 0;
}
