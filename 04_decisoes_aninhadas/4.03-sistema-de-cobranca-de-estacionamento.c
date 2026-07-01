#include <stdio.h>

int main(){

    int veiculo, horas;
    double valorF;

    scanf("%d %d", &veiculo, &horas);

    switch(veiculo){

    case 1:
        valorF = 2 * horas;
        break;

    case 2:
        valorF = 5 * horas;
        break;

    case 3:
        valorF = 8 * horas;
        break;

    case 4:
        valorF = 10 * horas;
        break;

    case 5:
        valorF = 15 * horas;
        break;

    default:
        printf("Codigo de veiculo invalido");
        return 1;
    }

    if(horas > 5){
        valorF = valorF * 0.9;
        printf("Total: R$ %.2f\n", valorF);
    }else{
        printf("Total: R$ %.2f\n", valorF);
    }

    return 0;
}
