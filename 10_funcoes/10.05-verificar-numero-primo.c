#include <stdio.h>
int ePrimo(int a, int b);

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    ePrimo(a, b);

    return 0;
}

int ePrimo(int a, int b){

    int primos[100];
    int contador = 0;
    int j = 0;

    for(; a <= b; a++){
        contador = 0;
        for(int i = 1; i <= a; i++){

            if(a % i == 0){
                contador++;
            }
            if(i == a && contador == 2){
                primos[j] = a;
                j++;
            }
        }
    }
    for(int i = 0; i < j; i++){
        printf("%d ", primos[i]);
    }
    return 0;

}
