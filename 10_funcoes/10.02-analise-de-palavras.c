#include <stdio.h>
#include <string.h>
#include <ctype.h>

int epalindromo(char palavra[]);
int vogais(char palavra[]);
int consoantes(char palavra[]);
void toMaiuscula(char palavra[], char resultado[]);
void toInverse(char palavra[], char invetida[]);

int main(){

    char palavra[101];
    char resultado[101];
    char invertida[101];

    scanf("%s", palavra);

    if(epalindromo(palavra)){
        printf("Palindromo: SIM\n");
    }else{
        printf("Palindromo: NAO\n");
    }

    printf("Vogais: %d | Consoantes: %d\n",
           vogais(palavra), consoantes(palavra));

    toMaiuscula(palavra, resultado);
    printf("Maiuscula: %s\n", resultado);

    toInverse(palavra, invertida);
    printf("Invertida: %s", invertida);
}

int epalindromo(char palavra[]){

    int tam = strlen(palavra);
    char inverso[101];

    for(int i = 0; palavra[i] != '\0'; i++){
        inverso[i] = palavra[tam - 1 - i];
    }
    inverso[tam] = '\0';

    if(strcmp(palavra, inverso) == 0){
        return 1;
    }
    return 0;
}

int vogais(char palavra[]){

    char vogais[] = "AEIOUaeiou";
    int contador = 0;

    for(int i = 0; palavra[i] != '\0'; i++){
        if(strchr(vogais, palavra[i]) != NULL){
            contador++;
        }
    }
    return contador;
}

int consoantes(char palavra[]){

    char vogais[] = "AEIOUaeiou";
    int contador = 0;

    for(int i = 0; palavra[i] != '\0'; i++){
        if(isalpha(palavra[i]) && strchr(vogais, palavra[i]) == NULL){
            contador++;
        }
    }
    return contador;
}

void toMaiuscula(char palavra[], char resultado[]){

    int i;
    for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            resultado[i] = palavra[i] - 32;
        }else{
            resultado[i] = palavra[i];
        }
    }
    resultado[i] = '\0';
}

void toInverse(char palavra[], char invertida[]){

    int tam = strlen(palavra);

    for(int i = 0; palavra[i] != '\0'; i++){
        invertida[i] = palavra[tam - 1 - i];
    }
}
