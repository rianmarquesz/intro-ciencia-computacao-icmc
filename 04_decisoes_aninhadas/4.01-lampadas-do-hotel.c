#include <stdio.h>

int main(){

    int IA;
    int IB;
    int FA;
    int FB;

    scanf("%d %d %d %d", &IA, &IB, &FA, &FB);

    if(IA == FA && IB == FB){
        printf("0");
    }else if(IA != FA && IB != FB){
        printf("1");
    }else if(IA != FA && IB == FB){
        printf("1");
    }else if(IA == FA && IB != FB){
        printf("2");
    }
}
