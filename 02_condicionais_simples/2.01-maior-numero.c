#include <stdio.h>

int main(){

    int a;
    int b;

    scanf("%d %d", &a, &b);

    if(a > b){
        printf("%d", a);
    }else if(a < b){
        printf("%d", b);
    }else{
        printf("igual");
    }
    return 0;
}
