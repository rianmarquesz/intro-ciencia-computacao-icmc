#include <stdio.h>

int main(){

    float D;
    float L;

    scanf("%f", &D);
    scanf("%f", &L);

    if(1 <= D && D <= 10000 && 0.1 <= L && L <= 1000){
    }else{
    return 1;
    }

    float spent = (D / L);

    if(spent < 8){
        printf("Venda o carro!");
    }else if(8 <= spent && spent <= 12){
        printf("Economico!");
    }else{
        printf("Super economico!");
    }

    return 0;
}
