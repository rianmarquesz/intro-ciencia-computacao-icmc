#include <stdio.h>

int main(){

    int dir = 0;
    int x, y = 0;

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        int F, E, D;
        scanf("%d %d %d", &F, &E, &D);

        if(F == 0){
            if(dir == 0){
                x++;
            }else if(dir == 1){
                y++;
            }else if(dir == 2){
                x--;
            }else if(dir == 3){
                y--;
            }
        }else if(D == 1 && E == 0){
            dir = (dir + 1) % 4;
        }else{
            dir = (dir + 3) % 4;
        }

    }

    printf("%d %d", x, y);

    return 0;
}
