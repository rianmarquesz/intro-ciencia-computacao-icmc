#include <stdio.h>

int main(){

    double pi = 0.0;
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        double termo = 4.0 / (2 * i - 1);
        if(i % 2 == 0){
            pi -= termo;
        }else{
            pi += termo;
        }
    }
    printf("%.6f", pi);
    return 0;
}
