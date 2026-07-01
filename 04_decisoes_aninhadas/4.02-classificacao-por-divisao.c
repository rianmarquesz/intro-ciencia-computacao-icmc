#include <stdio.h>

int main(){

    int j, score, x;
    scanf("%d", &j);

    for(int i = 0; i < j; i++){

        scanf("%d", &score);

        if(score >= 1900){
            x = 1;
            printf("Divisao %d\n", x);
        }else if(score >= 1600){
            x = 2;
            printf("Divisao %d\n", x);
        }else if(score >= 1400){
            x = 3;
            printf("Divisao %d\n", x);
        }else if(score <= 1399){
            x = 4;
            printf("Divisao %d\n", x);
        }
    }
    return 0;
}
