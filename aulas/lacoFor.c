#include <stdio.h>
#include <stdlib.h>
main(){
   int i, num, maior=0;
   
    printf("Digite 10 valores: \n");
    for(i=1; i<=10;i++)
    {
       scanf("%d",&num);
       if(num>maior)
       maior=num;
    }
    printf("O numero maior e: %d \n",maior);
}