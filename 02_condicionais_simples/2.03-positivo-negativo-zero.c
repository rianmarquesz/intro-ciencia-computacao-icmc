#include <stdio.h>

int main(){

    int numA;
    scanf("%d", &numA);

    if(numA > 0){
        printf("positivo");
    }else if(numA < 0){
        printf("negativo");
    }else{
        printf("zero");
    }

    return 0;
}
