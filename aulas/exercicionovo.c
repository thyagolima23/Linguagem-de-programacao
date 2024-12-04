#include<stdio.h>
#include<stdlib.h>

main(){
    char nome[30], endereco[30], telefone[15], cep[9];
    printf("Digite seu nome completo: ");
    gets(nome);
    printf("Digite seu endereco: ");
    gets(endereco);
    printf("Digite seu CEP: ");
    scanf("%s",&cep);
    printf("Digite seu telefone: ");
    scanf("%s",&telefone);
    printf("****************************************\n");
    printf("Nome completo:%s\n",nome);
    printf("Endereco:%s\n",endereco);
    printf("CEP:%s",cep);
    printf("\tTelefone:%s \n,telefone");
    printf("****************************************\n");
    printf("\n\nCadaastro realizado com sucesso!\n");
    getchar();
}