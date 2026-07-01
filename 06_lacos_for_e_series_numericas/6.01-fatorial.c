#include <stdio.h>

int main(){

    int n, fatorial = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fatorial *= i;
    }
    printf("%d", fatorial);

    return 0;
}
