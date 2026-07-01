#include <stdio.h>

int main(){

    int enter;
    scanf("%d", &enter);

    for(int i = 1; i <= enter; i++){
        for(int j = 0; j < i; j++){
            printf("*\t");
        }
        puts("");
    }

    for(int i = enter - 1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            printf("*\t");
        }
        if(i > 1){
            printf("\n");
        }
    }
    return 0;
}
