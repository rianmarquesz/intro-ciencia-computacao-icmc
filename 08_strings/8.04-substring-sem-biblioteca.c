#include <stdio.h>
#include <string.h>

int main(){

    char a[1001];
    char b[1001];

    int cont = 0;
    int j = 0;

    fgets(a, 1001, stdin);
    a[strcspn(a, "\r\n")] = '\0';

    fgets(b, 1001, stdin);
    b[strcspn(b, "\r\n")] = '\0';

    for(int i = 0; a[i] != '\0' && !cont; i++){
        j = 0;

        while(b[j] != '\0' && a[i + j] == b[j]){
            j++;
        }
        if(b[j] == '\0'){
            cont = 1;
        }
    }
    if(cont != 1){
        printf("0");
    }else{
        printf("1");
    }

    return 0;
}
