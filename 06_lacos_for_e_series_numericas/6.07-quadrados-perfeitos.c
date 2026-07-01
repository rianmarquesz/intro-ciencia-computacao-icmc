#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int square = i * i;
        if(square <= n){
            printf("%d\n", square);
        }else{
            continue;
        }

    }

    return 0;
}
