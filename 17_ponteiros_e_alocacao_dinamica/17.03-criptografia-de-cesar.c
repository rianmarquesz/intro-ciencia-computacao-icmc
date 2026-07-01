#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char crip[50];
    char palavra[50];
    scanf("%s", palavra);
    int tam = strlen(palavra);
    int des;
    scanf("%d", &des);

    for(int i = 0; i < tam; i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            crip[i] = ((palavra[i] - 'a' + des) % 26) + 'a';
        }
    }
    crip[tam] = '\0';
    printf("%s", crip);
    return 0;
}
