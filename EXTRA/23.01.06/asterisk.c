// Faça um programa que lê 5 valores inteiros e exibe um gráfico na tela, feito com caracteres “*”.

#include<stdio.h>
int main(){
    int vetor[5], i, a;

    // orienta o usuário
    printf("Digite 5 valores inteiros: ");

    //lê 5 valores e armazena no vetor
    for(i=0;i<5;i++){
        scanf(" %d", &vetor[i]);
    }

    //imprime na tela os valores do vetor como asteriscos
    for(i=0;i<5;i++){
        for(a=0;a<vetor[i];a++){
        printf("*");}
        printf("\n");
    }
    return 0;
}
