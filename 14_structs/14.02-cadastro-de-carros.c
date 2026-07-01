#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char fabricante[21];
    char modelo[21];
    int ano;
    char cor[21];
    float preco;
    int id;
}carro;

void cadastrarCarro(carro *carroA);
void alterarCarro(carro *carroA, int option);
void mostrarCarro(carro *carroA);

int main(){

    carro carroA;
    cadastrarCarro(&carroA);
    int option;
    scanf("%d", &option);
    alterarCarro(&carroA, option);
    mostrarCarro(&carroA);

    return 0;
}

void cadastrarCarro(carro *carroA){
    scanf(" %s", carroA->fabricante);
    scanf(" %s", carroA->modelo);
    scanf("%d", &carroA->ano);
    scanf(" %s", carroA->cor);
    scanf("%f", &carroA->preco);
}

void alterarCarro(carro *carroA, int option){

    int bufferInt;
    char bufferStr[21];
    float bufferFloat;

    switch(option){

    case 1:
        scanf(" %s", bufferStr);
        strcpy(carroA->fabricante, bufferStr);
        break;

    case 2:
        scanf(" %s", bufferStr);
        strcpy(carroA->modelo, bufferStr);
        break;

    case 3:
        scanf("%d", &bufferInt);
        carroA->ano = bufferInt;
        break;

    case 4:
        scanf(" %s", bufferStr);
        strcpy(carroA->cor, bufferStr);
        break;

    case 5:
        scanf("%f", &bufferFloat);
        carroA->preco = bufferFloat;
        break;
    }
}

void mostrarCarro(carro *carroA){

    printf("%s\n", carroA->fabricante);
    printf("%s\n", carroA->modelo);
    printf("%d\n", carroA->ano);
    printf("%s\n", carroA->cor);
    printf("%.2f", carroA->preco);

}
