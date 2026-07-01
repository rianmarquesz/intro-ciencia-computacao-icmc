#include <stdio.h>
#include <string.h>

int main(){

    char enterA[1001];
    char saidaA[1000];
    int j = 1;

    fgets(enterA, 1001, stdin);
    enterA[strcspn(enterA, "\r\n")] = '\0';

    int tam = strlen(enterA);

    for(int i = 0; enterA[i] != '\0'; i++){
        saidaA[i] = enterA[tam - j];
        j++;
    }
    saidaA[tam] = '\0';
    printf("%s", saidaA);
    return 0;
}
