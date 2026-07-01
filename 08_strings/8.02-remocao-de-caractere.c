#include <stdio.h>
#include <string.h>

int main(){

    char s[1001];
    char c;

    fgets(s, 1001, stdin);

    s[strcspn(s, "\r\n")] = '\0';

    scanf(" %c", &c);

    int j = 0;

    for(int i = 0; s[i]!= '\0'; i++){
        if(s[i] != c){
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';

    printf("%s", s);
    return 0;
}
