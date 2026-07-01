#include <stdio.h>

int main(){

    int n, f = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            f = f + (i * -1);
        }else{
            f = f + i;
        }

    }
    printf("%d", f);

    return 0;
}
