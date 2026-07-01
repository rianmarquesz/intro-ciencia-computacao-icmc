#include <stdio.h>

int main(){

    int numA, numB, numC;
    scanf("%d", &numA);
    scanf("%d", &numB);
    scanf("%d", &numC);

    if(numA > numB && numA > numC){
        printf("%d", numA);
    }else if(numB > numA && numB > numC){
        printf("%d", numB);
    }else if(numC > numA && numC > numB){
        printf("%d", numC);
    }else{
        printf("Ha numeros iguais");
    }

    return 0;
}
