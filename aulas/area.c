/*Fazer um aplicativo que receba do usuário a base e a altura de um triângulo e devolva a área do triângulo retângulo.
fórmula da área do triângulo = Base*altura/2*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    float base = 0;
    float altura = 0;
    float area = 0;
    printf("Digite a base do triângulo:\n");
    scanf("%f",&base);
    printf("Digite a altura do triângulo:\n");
    scanf("%f",&altura);
    area = (base*altura)/2;
    printf("A área do triângulo e': %6.2f", area);
}