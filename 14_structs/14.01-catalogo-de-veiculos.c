#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    typedef struct{
        char marca[20];
        char modelo[20];
        int ano;
        float preco;
    }carros;

    carros lista[5];

    for(int i = 0; i < 5; i++){
        scanf(" %s", lista[i].marca);
        scanf(" %s", lista[i].modelo);
        scanf("%d", &lista[i].ano);
        scanf("%f", &lista[i].preco);
    }

    int p, signal = 0;
    scanf("%d", &p);

    for(int i = 0; i < 5; i++){
        if(lista[i].preco < p){
            printf("%s ", lista[i].marca);
            printf("%s ", lista[i].modelo);
            printf("%d ", lista[i].ano);
            printf("%.2f\n", lista[i].preco);
            signal++;
        }
    }
    if(signal == 0){
        printf("Nenhum veiculo encontrado");
    }

    return 0;
}
