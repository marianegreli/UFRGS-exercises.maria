// tentando outra solução para o calculo de fatorial de um nuemro inteiro positivo informado

#include<stdio.h>
void main(){
    
    int i, numero;
    
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    
    // processamento 
    
    for ((i = numero-1); i>=1; i--){
        numero = numero*i;
    }
    printf("%d",numero);
}
