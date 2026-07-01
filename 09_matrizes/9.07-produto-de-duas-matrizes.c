#include <stdio.h>

int main(){

    int a, b, c, d, x, y;
    x = y = 0;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    int matrizA[a][b];
    int matrizB[c][d];
    int matrizC[a][d];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(int i = 0; i < c; i++){
        for(int j = 0; j < d; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    if(b != c){
        printf("Produto inexistente");
        return 0;
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            matrizC[i][j] = 0;
            for(int k = 0; k < b; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
