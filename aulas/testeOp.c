#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
    int opcao = 0, numero1 = 0, numero2 = 0;
    printf("Digite dois numeros:\n");
    scanf("%d",&numero1);
    scanf("%d",&numero2);
    printf("Escolha uma opcao abaixo:\n");
    printf(" 1 - Soma \n 2 - Subtracao\n 3 - Multiplicacao \n 4 - Divisao \n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1: printf("A soma dos numeros e %d",numero1+numero2);
            break;
        case 2: printf("A diferenca entre os numeros e %d",numero1-numero2);
            break;
        case 3: printf("O resultado da multiplicacao entre os numeros e %d",numero1*numero2);
            break;
        case 4: printf("O resultado da divisao entre os numeros e %d",numero1/numero2);
            break;
        default: printf("Opcao invalida!");
    }
}