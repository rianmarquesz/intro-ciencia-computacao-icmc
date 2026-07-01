#include <stdio.h>
#include <string.h>

int main(){

    char a[3000];
    char b[3000];
    char c[3000];

    fgets(a, 2000, stdin);
    a[strcspn(a, "\r\n")] = '\0';

    fgets(b, 2000, stdin);
    b[strcspn(b, "\r\n")] = '\0';

    int i = 0;
    int j = 0;
    int k = 0;

    while(a[k] != '\0' || b[j] != '\0'){

        if(a[k] != '\0'){
            c[i] = a[k];
            i++;
            k++;
        }
        if(b[j] != '\0'){
            c[i] = b[j];
            j++;
            i++;
        }
    }
    c[i] = '\0';

    printf("%s", c);
    return 0;
}
