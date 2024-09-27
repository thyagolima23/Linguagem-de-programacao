#include<stdio.h>
#include<stdlib.h>
main(){
    int numero1 = 0, numero2 = 0;
    printf("Digite dois números:\n");
    scanf("%d",&numero1);
    scanf("%d",&numero2);
    if (numero1 > numero2)
        printf("O numero maior e o primeiro numero: %d",numero1);
    else if (numero2>numero1)
    printf("o numero maior e o segundo numero: %d", numero2);
    else
    printf("Os numeros são iguais: %d", numero1);     
}