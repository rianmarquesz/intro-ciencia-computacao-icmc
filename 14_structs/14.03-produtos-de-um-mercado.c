#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    double preco;
    double peso;
    int dia, mes, ano;
}produto;

void cadastrarProduto(int n, produto *lista);
void mostrarProduto(int n, produto *lista);

int main(){

    int n;
    scanf("%d", &n);

    produto *lista = malloc(n * sizeof(produto));

    if(lista == NULL){
        printf("Memory error");
        return 1;
    }

    cadastrarProduto(n, lista);
    mostrarProduto(n, lista);

    free(lista);

    return 0;
}

void cadastrarProduto(int n, produto *lista){
        for(int i = 0; i < n; i++){
            scanf("%d", &lista[i].id);
            scanf("%lf", &lista[i].preco);
            scanf("%lf", &lista[i].peso);
            scanf("%d", &lista[i].dia);
            scanf("%d", &lista[i].mes);
            scanf("%d", &lista[i].ano);
        }
}


void mostrarProduto(int n, produto *lista){

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for(int i = 1; i < n; i++){
        if(lista[i].id > lista[a].id){
            a = i;
        }
        if(lista[i].preco > lista[b].preco){
            b = i;
        }
        if(lista[i].peso > lista[c].peso){
            c = i;
        }
        if(lista[i].ano > lista[d].ano){
            d = i;
        }else if(lista[i].ano == lista[d].ano){
            if(lista[i].mes > lista[d].mes){
                d = i;
            }else if(lista[i].mes == lista[d].mes){
                if(lista[i].dia > lista[d].dia){
                    d = i;
                }
            }
        }
    }
    printf("%d - %.2f - %.1f - %02d/%02d/%02d\n",
       lista[a].id, lista[a].preco, lista[a].peso,
       lista[a].dia, lista[a].mes, lista[a].ano);

    printf("%d - %.2f - %.1f - %02d/%02d/%02d\n",
       lista[b].id, lista[b].preco, lista[b].peso,
       lista[b].dia, lista[b].mes, lista[b].ano);

    printf("%d - %.2f - %.1f - %02d/%02d/%02d\n",
       lista[c].id, lista[c].preco, lista[c].peso,
       lista[c].dia, lista[c].mes, lista[c].ano);

    printf("%d - %.2f - %.1f - %02d/%02d/%02d\n",
       lista[d].id, lista[d].preco, lista[d].peso,
       lista[d].dia, lista[d].mes, lista[d].ano);
}
