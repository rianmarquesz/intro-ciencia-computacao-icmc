#include <stdio.h>

int main(){

    int n;
    double s = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        s += 1.0 / (n - i);
    }
    printf("%.4f", s);
    return 0;
}
