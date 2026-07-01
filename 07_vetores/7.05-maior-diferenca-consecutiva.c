#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    int diferenca = abs(a[1] - a[0]);

    for(int i = 0; i < 9; i++){

        if(abs(a[i+1] - a[i]) > diferenca){
            diferenca = abs(a[i+1] - a[i]);
        }
    }
    printf("%d", diferenca);
    return 0;
}
