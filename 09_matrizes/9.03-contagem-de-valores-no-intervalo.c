#include <stdio.h>

int main(){

    int matriz[4][5];
    int a, b;
    int contador = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    scanf("%d %d", &a, &b);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if(matriz[i][j] >= a && matriz[i][j] <= b){
                contador++;
            }
        }
    }
    printf("%d", contador);
    return 0;
}
