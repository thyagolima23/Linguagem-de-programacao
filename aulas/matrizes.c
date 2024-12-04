#include <stdio.h>
#include <stdlib.h>
int main(){
    double notas[5] [5];
    for (int i = 0; i < 5; i++) { //para as linhas
            for (int j = 0; j < 5; j++) { //para as colunas
            scanf("%f", &notas[i][j]);
            }
    }
    printf("**********Saída de dados**********");
    for (int i = 0; i < 5; i++) { //para as linhas
             for (int j = 0; j < 5; j++){ //para as colunas
             printf("%f",notas[i][j]);
             }
    }
    return 0;
}