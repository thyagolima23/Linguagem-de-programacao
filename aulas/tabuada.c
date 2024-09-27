#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
        int num; int i;
        printf("Digiteum número inteiro: \n");
        scanf("%d",&num);
        for(i=0;i<=10;i++){
            printf("%d x %d = %d \n",num, i, num*i);
        }

}