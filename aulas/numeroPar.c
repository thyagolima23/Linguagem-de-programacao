/*Algoritmo que lê um número e retorna
se o número é par ou ímpar*/
#include <stdio.h>
#include <math.h>

int main(){
    int numero;
    printf("Digite um número inteiro:");
    scanf("%d",&numero);
    if ((numero % 2)==0){
        printf("O número é par");
    }
    else{
        printf("O número é ímpar");
    }
}
