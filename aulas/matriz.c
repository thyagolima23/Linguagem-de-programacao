<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int matriz[3][3],i,j;//matriz e variaveis contadoras
    printf("Digite os valores para os elementos da matriz:\n\n");
    for (i=0;i<3;i++)
       for (j=0;j<3;j++)
    {
        printf("Elemento [%d][%d] = %d\n", i,j);
        scanf("%d",&matriz[i][j]);
    }
    printf("**********Saída de dados**********");
    for (i=0;i<3;i++)
       for (j=0;j<3;j++)
    {
        printf("Elemento [%d][%d] = %d \n", i,j,matriz[i][j]);
    }
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int matriz[3][3],i,j;//matriz e variaveis contadoras
    printf("Digite os valores para os elementos da matriz:\n\n");
    for (i=0;i<3;i++)
       for (j=0;j<3;j++)
    {
        printf("Elemento [%d][%d] = %d\n", i,j);
        scanf("%d",&matriz[i][j]);
    }
    printf("**********Saída de dados**********");
    for (i=0;i<3;i++)
       for (j=0;j<3;j++)
    {
        printf("Elemento [%d][%d] = %d \n", i,j,matriz[i][j]);
    }
    return 0;
>>>>>>> f8acae8a3c4551af00da58bcb6b0d86a52e5b788
}