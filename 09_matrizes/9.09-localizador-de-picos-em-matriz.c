#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int matriz[n][n];
    int pico;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            pico = 1;

            if(i > 0 && matriz[i][j] <= matriz[i-1][j]){
                pico = 0;
            }

            if(i < n-1 && matriz[i][j] <= matriz[i+1][j]){
                pico = 0;
            }

            if(j > 0 && matriz[i][j] <= matriz[i][j-1]){
                pico = 0;
            }

            if(j < n-1 && matriz[i][j] <= matriz[i][j+1]){
                pico = 0;
            }

            if(pico){
                printf("Pico encontrado em [%d][%d]: %d\n",
                       i, j, matriz[i][j]);
            }

        }
    }

    return 0;
}
