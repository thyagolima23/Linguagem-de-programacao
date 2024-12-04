<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

int sqr(int);
int dobro(int);
int triplo(int);

int main(){
    int numero = 0;
    printf("Digite um número inteiro:\n");
    scanf("%d",&numero);
    if(numero<0){
    sqr(numero);
    }
    else if(numero%2 == 0){
    dobro(numero);
    }
    else{
    triplo(numero);
    }
    return 0;
}
int sqr(numero){
    //calcule o quadrado do número
    int x = numero;
    printf("\n O quadrado do numero e: %d",x*x);
    return(0);
}
int dobro(numero){
    int x = numero;
    printf("\n O dobro do numero e: %d",2*x);
    return(0);

}
int triplo(numero){
    int x = numero;
    printf("\n O triplo do numero e: %d",3*x);
    return(0);

=======
#include<stdio.h>
#include<stdlib.h>

int sqr(int);
int dobro(int);
int triplo(int);

int main(){
    int numero = 0;
    printf("Digite um número inteiro:\n");
    scanf("%d",&numero);
    if(numero<0){
    sqr(numero);
    }
    else if(numero%2 == 0){
    dobro(numero);
    }
    else{
    triplo(numero);
    }
    return 0;
}
int sqr(numero){
    //calcule o quadrado do número
    int x = numero;
    printf("\n O quadrado do numero e: %d",x*x);
    return(0);
}
int dobro(numero){
    int x = numero;
    printf("\n O dobro do numero e: %d",2*x);
    return(0);

}
int triplo(numero){
    int x = numero;
    printf("\n O triplo do numero e: %d",3*x);
    return(0);

>>>>>>> df28ccfa79f036f8c219972696c6e52330a8f334
}