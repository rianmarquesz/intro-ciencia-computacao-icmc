#include <stdio.h>

int main(){

    int enter, maior, menor;
    int flag = 1;

    while(scanf("%d", &enter) == 1 && enter >= 0){

        if(flag == 1){
            maior = enter;
            menor = enter;
            flag = 0;
        }else{
            if(enter > maior){
            maior = enter;
            }else if(enter < menor){
            menor = enter;
            }
        }
    }
    printf("%d %d", maior, menor);
    return 0;
}
