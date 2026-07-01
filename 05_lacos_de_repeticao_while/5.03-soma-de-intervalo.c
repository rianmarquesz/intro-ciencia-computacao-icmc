#include <stdio.h>

int main(){

    int x = 0, y = 0, soma = 0;
    scanf("%d %d", &x, &y);

    for(; x <= y; x++){
        soma += x;
    }

    printf("%d", soma);

    return 0;
}
