#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a == b || a == c || b == c){
        printf("Erro: os numeros devem ser distintos.");
        return 1;
    }else if(a < b && a < c){
            printf("%d ", a);
            if(b < c){
                printf("%d %d", b, c);
                return 1;
        }else{
            printf("%d %d", c, b);
            return 1;
        }
    }else if(b < a && b < c){
        printf("%d ", b);
        if(a < c){
            printf("%d %d", a, c);
            return 1;
        }else{
            printf("%d %d", c, a);
            return 1;
        }
    }else if(c < a && c < b){
        printf("%d ", c);
        if(a < b){
            printf("%d %d", a, b);
            return 1;
        }else{
            printf("%d %d", b, a);
            return 1;
        }
    }

    return 0;

}
