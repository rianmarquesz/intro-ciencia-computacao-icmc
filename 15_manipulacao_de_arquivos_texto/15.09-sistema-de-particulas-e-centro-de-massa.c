#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double a;
    double b;
    double c;
}PONTO3D;

typedef struct{
    PONTO3D posicao;
    double massa;
}Particula;

int main(){

    int partNum;
    scanf("%d", &partNum);
    Particula *particula = malloc(partNum * sizeof(Particula));

    for(int i = 0; i < partNum; i++){
        scanf("%lf %lf %lf %lf",
        &particula[i].posicao.a, &particula[i].posicao.b, &particula[i].posicao.c, &particula[i].massa);
    }

    double centroX = 0.00;
    double centroY = 0.00;
    double centroZ = 0.00;

    double divisao = 0.00;
    for(int i = 0; i < partNum; i++){
        centroX += particula[i].posicao.a * particula[i].massa;
        divisao += particula[i].massa;
    }
    centroX = centroX / divisao;

    divisao = 0.00;
    for(int i = 0; i < partNum; i++){
        centroY += particula[i].posicao.b * particula[i].massa;
        divisao += particula[i].massa;
    }
    centroY = centroY / divisao;

    divisao = 0.00;
    for(int i = 0; i < partNum; i++){
        centroZ += particula[i].posicao.c * particula[i].massa;
        divisao += particula[i].massa;
    }
    centroZ = centroZ / divisao;

    printf("Centro de Massa: X=%.2f, Y=%.2f, Z=%.2f",
           centroX, centroY, centroZ);

    free(particula);
    return 0;
}
