#include <stdio.h>


int main(){

    int anoA, anoB;

    scanf("%d", &anoA);
    scanf("%d", &anoB);

    /*if(anoA < 1900 || anoA > 9999 || anoB < 1900 || anoB > 9999){
        return 1;
    }*/

    for(; anoA <= anoB; anoA++){

        if(anoA % 4 == 0 && anoA % 100 != 0 || anoA % 400 == 0){
            printf("%d\n", anoA);
        }

    }

    return 0;
}
