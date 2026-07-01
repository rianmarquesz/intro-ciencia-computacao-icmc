#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int transposta[m][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            transposta[i][j] = matriz[j][i];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
