#include <stdio.h>
#include<stdlib.h>
main(){
    int cont=1;
    printf("IMPARES \tPARES\n");
    for (cont=1;cont<=100;cont++){
        if(cont%2!=0)
        printf("%d \t \t", cont);
        else
        printf("%d \n", cont);
    }
}