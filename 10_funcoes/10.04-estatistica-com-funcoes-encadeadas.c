#include <stdio.h>
#include <math.h>

double soma(double conjunto[], int n);
double media(double conjunto[], int n);
double quadrado(double x);
double desvio(double conjunto[], int n);

int main(){

    int n;
    scanf("%d", &n);
    double conjunto[n];
    for(int i = 0; i < n; i++){
        scanf("%lf", &conjunto[i]);
    }
    double vSoma = soma(conjunto, n);
    double vMedia = media(conjunto, n);
    double vDesvio = desvio(conjunto, n);

    printf("Soma: %.2f\n", vSoma);
    printf("Media: %.2f\n", vMedia);
    printf("Desvio: %.2f", vDesvio);

    return 0;
}

double soma(double conjunto[], int n){

    double valorTotal = 0;

    for(int i = 0; i < n; i++){
        valorTotal += conjunto[i];
    }
    return valorTotal;
}

double media(double conjunto[], int n){

    double valorTotal = soma(conjunto, n);
    double valorMedio = valorTotal / n;

    return valorMedio;

}

double quadrado(double x){
    double resultado = x*x;
    return resultado;
}

double desvio(double conjunto[], int n){

    double vMedia = media(conjunto, n);
    double soma = 0;

    for(int i = 0; i < n; i++){
        soma += quadrado(conjunto[i] - vMedia);
    }
    double resultado = soma / n;
    resultado = sqrt(resultado);
    return resultado;
}
