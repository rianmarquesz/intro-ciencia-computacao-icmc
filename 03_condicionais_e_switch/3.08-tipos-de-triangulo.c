#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0){
        printf("0\n");
    }else if(a != b && a != c && b != c){
        printf("1\n");
    }else if(a == b && a != c || a != b && a == c || c != a && c == b){
        printf("2\n");
    }else if(a == b && a == c){
        printf("3\n");
    }

    return 0;
}

