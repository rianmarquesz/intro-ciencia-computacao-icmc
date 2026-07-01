#include <stdio.h>
#include <string.h>

int main(){

    char enter[1001];
    char reverse[1001];
    int i = 0, j = 0;

    fgets(enter, 1001, stdin);
    enter[strcspn(enter, "\n\r")] = '\0';

    for(i = strlen(enter) - 1; (enter[i]) >= 0; i--){
        reverse[j] = enter[i];
        j++;
    }
    reverse[j] = '\0';

    if(strcasecmp(enter, reverse) == 0){
        printf("SIM");
    }else{
        printf("NAO");
    }

    /*printf("%s\n", enter);
    printf("%s\n", reverse);*/

    return 0;
}
