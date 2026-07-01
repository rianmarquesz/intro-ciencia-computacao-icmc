#include <stdio.h>

int main(){

    int n, x, in = 0, out = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(x >= 10 && x <= 30){
            in++;
        }else{
            out++;
        }
    }
    printf("in: %d\n", in);
    printf("out: %d\n", out);
    return 0;
}
