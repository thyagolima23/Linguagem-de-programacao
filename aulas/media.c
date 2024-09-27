/*Criar um novo arquivo com o nome media.ce fazer um programa que calcule a média de 04 números.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    float media = 0;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo nunero:\n");
    scanf("%d", &n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d",&n3);
    printf("Digite o quarto numero:\n");
    scanf("%d", &n4);
    media = (n1+n2+n3+n4)/4;
    printf("A media dos numeros digitados e':%4.2f \n", media);
}