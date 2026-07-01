#include <stdio.h>

int main(){

    int n;
    int linhaR = 0;
    int linhaC = 0;

    scanf("%d", &n);

    int matriz[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        linhaR += matriz[0][i];
    }

    for(int i = 0; i < n; i++){
        linhaC = 0;
        for(int j = 0; j < n; j++){
            linhaC += matriz[i][j];
        }
        if(linhaR != linhaC){
            printf("NAO");
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        linhaC = 0;
        for(int j = 0; j < n; j++){
            linhaC += matriz[j][i];
        }
        if(linhaR != linhaC){
            printf("NAO");
            return 0;
        }
        linhaC = 0;
    }
    for(int i = 0; i < n; i++){
        linhaC += matriz[i][i];
    }
    if(linhaR != linhaC){
        printf("NAO");
        return 0;
    }

    linhaC = 0;

    for(int i = 0; i < n; i++){
        linhaC += matriz[i][n - i - 1];
    }
    if(linhaR != linhaC){
        printf("NAO");
        return 0;
    }
    printf("SIM");
    return 0;
}
