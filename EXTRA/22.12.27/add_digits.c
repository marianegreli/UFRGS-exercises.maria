// exibe a soma de algarismos de um numero inteiro qualquer 

#include<stdio.h>

int main(){

    int numero, i=10, flag=1, soma=0, resto=0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(flag){

    resto = (numero%i - (resto))/(i/10);
    i=i*10;

    if(resto==0){
        flag=0;
    }

    soma += resto;
    }

    printf("A soma dos digitos de %d eh %d", numero, soma);
    return 0;
}
