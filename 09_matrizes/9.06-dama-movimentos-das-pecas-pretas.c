#include <stdio.h>

int main(){

    int matriz[8][8];

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int captura[8][8] = {0};
    int simples[8][8] = {0};
    // Captura
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(matriz[i][j] == -1){
                    //diagonal esquerda
                if(i >= 2 && j >= 2){
                    if(matriz[i-1][j-1] == 1 && matriz[i-2][j-2] == 0){
                        captura[i][j] = 1;
                    }
                }
                    //diagonal direita
                if(i >= 2 && j <= 5){
                    if(matriz[i-1][j+1] == 1 && matriz[i-2][j+2] == 0){
                        captura[i][j] = 1;
                        }
                    }
            }
        }
    }
    //movimento simples
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(matriz[i][j] == -1 && !captura[i][j]){
                //esquerda
                if(i >= 1 && j >= 1 && matriz[i-1][j-1] == 0){
                    simples[i][j] = 1;
                }
                //direita
                if(i >= 1 && j <= 6 && matriz[i-1][j+1] == 0){
                    simples[i][j] = 1;
                }
            }
        }
    }
        //imprime captura
        int alarme = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(captura[i][j]){
                    printf("(%d,%d) ", i, j);
                    alarme = 1;
                }
            }
        }
        if(alarme == 1){
            printf("\n");
        }else{
            printf("None\n");
        }
        //imprime simples
        alarme = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(simples[i][j]){
                    printf("(%d,%d) ", i, j);
                    alarme = 1;
                }
            }
        }
        if(alarme == 1){
            printf("\n");
        }else{
            printf("None\n");
        }
        //imprime bloqueados (betas)

        alarme = 0;

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(matriz[i][j] == -1 && !captura[i][j] && !simples[i][j]){
                    printf("(%d,%d) ", i, j);
                    alarme = 1;
                }
            }
        }
        if(alarme != 1){
            printf("None");
        }
    return 0;
}
