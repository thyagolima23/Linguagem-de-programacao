#include<stdio.h>
#include<stdlib.h>
main(){
    int idade = 0;
    printf("Digite uma idade:\n");
    scanf("%d",&idade);
    switch(idade){
        case 0 ... 11: printf("Voce ainda e uma criaça\n");
            break;
        case 12 ...17: printf("Voce e um adolescente\n");
            break;
        case 18 ... 64: printf("Voce e um adulto\n");
            break;
        case 65 ... 150: printf("Voce e um idoso\n");
            break;
        default: printf("idade invalida!");
    }
}