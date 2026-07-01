#include <stdio.h>

int par(int conjunto[], int n);
int impar(int conjunto[], int n);
int maior(int conjunto[], int n);
int menor(int conjunto[], int n);
double media(int conjunto[], int n);
int acimaMedia(int conjunto[], int n, double valorMedia);

int main(){

    int n;
    scanf("%d", &n);
    int conjunto[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &conjunto[i]);
    }
    printf("Pares: %d | Impares: %d\n",
           par(conjunto, n), impar(conjunto, n));

    printf("Maior: %d | Menor: %d\n",
           maior(conjunto, n), menor(conjunto, n));

    double valorMedia = media(conjunto, n);
    printf("Media: %.2f\n", valorMedia);


    printf("Acima da media: %d", acimaMedia(conjunto, n, valorMedia));
}

int par(int conjunto[], int n){
    int resultado = 0;
    for(int i = 0; i < n; i++){
        if(conjunto[i] % 2 == 0){
            resultado++;
        }
    }
    return resultado;
}

int impar(int conjunto[], int n){
    int resultado = 0;
    for(int i = 0; i < n; i++){
        if(conjunto[i] % 2 != 0){
            resultado++;
        }
    }
    return resultado;
}

int maior(int conjunto[], int n){
    int resultado = conjunto[0];
    for(int i = 0; i < n; i++){
        if(conjunto[i] > resultado){
            resultado = conjunto[i];
        }
    }
    return resultado;
}

int menor(int conjunto[], int n){
    int resultado = conjunto[0];
    for(int i = 0; i < n; i++){
        if(conjunto[i] < resultado){
            resultado = conjunto[i];
        }
    }
    return resultado;
}

double media(int conjunto[], int n){
    double resultado = 0;

    for(int i = 0; i < n; i++){
        resultado += conjunto[i];
    }
    resultado = resultado / n;
    return resultado;
}

int acimaMedia(int conjunto[], int n, double valorMedia){

    int resultado = 0;

    for(int i = 0; i < n; i++){
        if(conjunto[i] > valorMedia){
            resultado++;
        }
    }
    return resultado;
}
