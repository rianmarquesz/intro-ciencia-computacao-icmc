#include <stdio.h>

int main(){

    int A[5], B[5], C[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < 5; i++){
        scanf("%d", &B[i]);
    }
    for(int i = 0; i < 5; i++){
        C[i] = A[i] + B[i];
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", C[i]);
    }

    return 0;
}
