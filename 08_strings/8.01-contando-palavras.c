#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char entrada[10001];
    int i, contador = 0;

    fgets(entrada, sizeof(entrada), stdin);

    for(i = 0; entrada[i] != '\0'; i++){
        if(entrada[i] >= 'a' && entrada[i] <= 'z' || entrada[i] >= 'A' && entrada[i] <= 'Z'){
            if(i == 0 || entrada[i - 1] == ' '){
                contador++;
            }
        }
    }
    printf("%d", contador);
    return 0;
}
