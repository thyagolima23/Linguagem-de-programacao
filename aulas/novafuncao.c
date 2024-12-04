<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Criar uma calculadora*/
//prototipos de funcao
main(){
    int soma(int, int);
    int subtrai(int,int);
    int mult(int,int);
    float divisao(int,int);

    int n1 = 0, n2 = 0, op = 0;
    int recebe_numero(n1, n2);
    printf("Digite dois numeros:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Escolha uma opcao abaixo:\n");
    printf("1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n");
    scanf("%d",&op);
    switch(op){
        case 1: soma(n1, n2);
            break;
        case 2: subtrai(n1, n2);
            break;
        case 3: mult(n1, n2);
            break;
        case 4: divisao(n1, n2);
            break;
        defalt: printf("Opcao invalida!");
    }
    return(0);
}
int soma(n1, n2){
    int resultado;
    resultado = n1+n2;
    printf("A soma dos dois numeros e %d",resultado);
}
int subtrai(n1, n2){
    int resultado;
    resultado = n1-n2;
    printf("A subtracao dos dois numeros e %d",resultado);
}
int mult(n1, n2){
    int resultado;
    resultado = n1*n2;
    printf("A multiplicacao dos dois numeros e %d",resultado);
}
float divisao(n1, n2){
    float resultado;
    resultado = n1/n2;
    printf("A divisao dos dois numeros e %d",resultado);
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Criar uma calculadora*/
//prototipos de funcao
main(){
    int soma(int, int);
    int subtrai(int,int);
    int mult(int,int);
    float divisao(int,int);

    int n1 = 0, n2 = 0, op = 0;
    int recebe_numero(n1, n2);
    printf("Digite dois numeros:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Escolha uma opcao abaixo:\n");
    printf("1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n");
    scanf("%d",&op);
    switch(op){
        case 1: soma(n1, n2);
            break;
        case 2: subtrai(n1, n2);
            break;
        case 3: mult(n1, n2);
            break;
        case 4: divisao(n1, n2);
            break;
        defalt: printf("Opcao invalida!");
    }
    return(0);
}
int soma(n1, n2){
    int resultado;
    resultado = n1+n2;
    printf("A soma dos dois numeros e %d",resultado);
}
int subtrai(n1, n2){
    int resultado;
    resultado = n1-n2;
    printf("A subtracao dos dois numeros e %d",resultado);
}
int mult(n1, n2){
    int resultado;
    resultado = n1*n2;
    printf("A multiplicacao dos dois numeros e %d",resultado);
}
float divisao(n1, n2){
    float resultado;
    resultado = n1/n2;
    printf("A divisao dos dois numeros e %d",resultado);
>>>>>>> f8acae8a3c4551af00da58bcb6b0d86a52e5b788
}