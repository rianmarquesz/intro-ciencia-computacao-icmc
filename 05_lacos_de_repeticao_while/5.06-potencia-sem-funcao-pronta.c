#include <stdio.h>

int main(){

    int x = 0, y = 0, pow = 1;
    scanf("%d %d", &x, &y);

        for(int i = 0; i < y; i++){
            pow = pow * x;
        }
        printf("%d", pow);

    return 0;
}
