// Faça um programa que lê e armazena 5 valores em um arranjo. 
// Depois o programa deve ler um valor e verificar se este valor está no
// arranjo. Quando o valor é encontrado, deve-se exibir uma mensagem na tela.

#include<stdio.h>
int main(){
    int valor[5], i, ver, flag=1, cont=0;

    for(i=0;i<5;i++){
        scanf(" %d", &valor[i]);
       // printf("A variavel %d foi colocada na posicao %d\n", valor[i], i);
    }

    while(flag){

        if(cont>=1) printf("O valor %d nao esta no arranjo\n", ver);
        cont++;

        printf("Verifique se esse valor esta no arranjo: ");
        scanf("%d", &ver);

        for(i=0;i<5;i++){
            if(ver==valor[i]) {
            printf("O valor %d esta no arranjo", ver);
            flag=0;
            }
        }

    }

    return 0;
}
