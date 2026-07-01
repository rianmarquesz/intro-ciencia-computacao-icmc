#include <stdio.h>

int main(){

    int days;
    scanf("%d", &days);

    if(days % 4 == 0 && days % 100 != 0 || days % 400 == 0){
        printf("e ano bissexto");
    }else{
        printf("nao e ano bissexto");
    }
    return 0;
}
