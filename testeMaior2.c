#include <stdio.h>
#include<stdlib.h>
main(){
    int cont=0;
    printf("IMPARES \tPARES\n");
    do{
                 cont++;
        if(cont%2!=0)
        printf("%d \t \t", cont);
        else
        printf("%d \n", cont);
    }while(cont<100);
}