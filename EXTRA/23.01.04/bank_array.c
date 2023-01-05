/*Você deve desenvolver um programa para auxiliar um
banco (muito exclusivo) a processar informações dos
seus 10 clientes. O programa utiliza dois vetores: um
para armazenar os códigos dos clientes e outro para
armazenar os saldos dos clientes. O programa deve ler
o código e o saldo de cada cliente. Ao fim, o programa
deve informar os códigos dos clientes cujo saldo seja
superior à média dos saldos informados.*/

#include<stdio.h>
int main(){
    int i, codigo[10], saldo[10], soma=0, media;

    for(i=0;i<10;i++){
        printf("Digite o codigo do cliente %d: ", i+1);
        scanf(" %d", &codigo[i]);
        printf("Digite o saldo do cliente %d: ", i+1);
        scanf(" %d", &saldo[i]);
        soma+=saldo[i];
    }

    media = soma/10;
    printf("Os clientes com saldo acima da media sao: \n");

    for(i=0;i<10;i++){
        if(saldo[i]>media) printf("%d\n",codigo[i]);
    }
    return 0;
}
