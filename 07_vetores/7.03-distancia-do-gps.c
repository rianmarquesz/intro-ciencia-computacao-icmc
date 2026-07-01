#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);
    int coord[n][2];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &coord[i][0], &coord[i][1]);
    }

    double trajT = 0.0;
    for(int i = 1; i < n; i++){

        double trajX = coord[i][0] - coord[i-1][0];
        double trajY = coord[i][1] - coord[i-1][1];
        trajT += sqrt(pow(trajX, 2) + pow(trajY, 2));
    }

    printf("%.4f", trajT);
    return 0;
}
