#include <stdio.h>

int main(){

    int n;
    int contador = 0;
    scanf("%d", &n);

    int vetorA[n];
    int vetorB[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetorA[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &vetorB[i]);
    }
    for(int i = 0; i < n; i++){
        contador = 0;
        for(int j = 0; j < n; j++){
            if(vetorA[i] == vetorB[j]){
                contador = 1;
                break;
            }
        }
        if(contador == 0){
                printf("0");
                return 0;
        }
    }
    printf("1");
    return 0;
}
