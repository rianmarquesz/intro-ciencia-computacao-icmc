#include <stdio.h>

int main(){

    int front, left, right;
    scanf("%d %d %d", &front, &left, &right);

    if (front == 0){
        printf("frente");
    }else if(front == 1 && left == 0 && right == 1){
        printf("esquerda");
    }else if(front == 1 && left == 1 || left == 0 && right == 0 || right == 1){
        printf("direita");
    }

    return 0;
}
