#include <stdio.h>

int main(){

    float a, b;
    char c;
    scanf("%f %f %c", &a, &b, &c);

    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    float divis = a / b;

    switch(c){

    case '+':
        printf("%d", sum);
        break;

    case '-':
        printf("%d", sub);
        break;

    case '*':
        printf("%d", multi);
        break;

    case '/':
        if(a == 0 || b == 0){
            printf("Erro: divisao por zero");
            return 1;
        }
        printf("%.2f", divis);
        break;

    default:
        printf("Erro: operacao invalida");
    }


    return 0;
}
