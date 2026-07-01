#include <stdio.h>

int main(){

    int matriz[4][5];
    int vetor[5] = {0, 0, 0, 0, 0};
    int z = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            vetor[z] += matriz[j][i];
        }
        z++;
    }
    for(int k = 0; k < 5; k++){
        printf("%d ", vetor[k]);
    }
    return 0;
}
