#include <stdio.h>
#include <string.h>

int main(){

    char separador;
    char sentenca[501];

    scanf("%c", &separador);
    while(getchar() != '\n');

    fgets(sentenca, 501, stdin);
    sentenca[strcspn(sentenca, "\n\r")] = '\0';

    for(int i = 0; sentenca[i] != '\0'; i++){
        if(sentenca[i] == separador){
            printf("\n");
        }else{
        printf("%c", sentenca[i]);
        }
    }

    return 0;
}
