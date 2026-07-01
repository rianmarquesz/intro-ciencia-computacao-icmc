#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor;
    scanf("%d", &valor);
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    while(valor / 200){
        a++;
        valor = valor - 200;
    }
    while(valor / 100){
        b++;
        valor = valor - 100;
    }
    while(valor / 50){
        c++;
        valor = valor - 50;
    }
    while(valor / 10){
        d++;
        valor = valor - 10;
    }
    while(valor / 2){
        e++;
        valor = valor - 2;
    }
    while(valor / 1){
        f++;
        valor = valor - 1;
    }
    if(a > 0){
        printf("%d nota(s)/moeda(s) de R$200\n", a);
    }
    if(b > 0){
        printf("%d nota(s)/moeda(s) de R$100\n", b);
    }
    if(c > 0){
        printf("%d nota(s)/moeda(s) de R$50\n", c);
    }
    if(d > 0){
        printf("%d nota(s)/moeda(s) de R$10\n", d);
    }
    if(e > 0){
        printf("%d nota(s)/moeda(s) de R$2\n", e);
    }
    if(f > 0){
        printf("%d nota(s)/moeda(s) de R$1", f);
    }


    return 0;
}
