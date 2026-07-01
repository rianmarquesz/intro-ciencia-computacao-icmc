#include <stdio.h>
#include <string.h>

int main(){

    char sentenca[101];
    int seta = 0;
    int vogais = 0;
    int tam = 0;

    fgets(sentenca, 101, stdin);
    sentenca[strcspn(sentenca, "\n\r")] = '\0';
    tam = strlen(sentenca);

    for(int k = 0; sentenca[k] != '\0'; k++){
        if(strchr("aeiouAEIOU", sentenca[k])){
            vogais++;
        }
    }

    for(int i = 0; i <= tam; i++){
        if(sentenca[i] == ' ' || sentenca[i] == '\0'){
            for(int j = i - 1; j >= seta; j--){
                putchar(sentenca[j]);
            }

            if(sentenca[i] == ' '){
                putchar(' ');
            }
            seta = i + 1;
        }
    }
    printf("\n");
    printf("Vogais: %d", vogais);
    return 0;
}
