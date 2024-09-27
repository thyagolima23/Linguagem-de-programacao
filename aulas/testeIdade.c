#include<stdio.h>
#include<stdlib.h>
main(){
    int idade = 0;
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    if (idade>=70){
        printf("Você pertence a melhor idade!");
    }
    else
        if (idade>21){
            printf("Você pertence a idade adulta!");
        }
    else
        printf("Você e' um jovem!");
}