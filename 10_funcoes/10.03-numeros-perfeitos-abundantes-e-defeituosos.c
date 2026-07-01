#include <stdio.h>

int somaDivisores(int k);
int classifica(char t, int n);

int main(){

    int i, n;
    int abun = 0, def = 0, perf = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(classifica('<', i)) def++;
        if(classifica('=', i)) perf++;
        if(classifica('>', i)) abun++;
    }

    printf("%d\n", def);
    printf("%d\n", perf);
    printf("%d", abun);

    return 0;
}

int somaDivisores(int k){

    int soma = 0;
    int i;
    for(i = 1; i < k; i++){
        if(k % i == 0){
            soma += i;
        }
    }
    return soma;
}

int classifica(char t, int n){

    int soma = somaDivisores(n);

    if(t == '<'){
        return soma < n;
    }else if(t == '='){
        return soma == n;
    }else if(t == '>'){
        return soma > n;
    }

    return 0;
}
