#include <stdio.h>

int main(){

    int matriz[5][5];
    int a, b, c, d;
    a = b = c = d = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                a = i;
                b = j;
            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                c = i;
                d = j;
            }
        }
    }

    printf("%d %d %d\n", maior, a, b);
    printf("%d %d %d\n", menor, c, d);

    return 0;
}
