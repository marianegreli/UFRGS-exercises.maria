// tentando por uma solução mais facil pq pelo amor

#include<stdio.h>
void main(){
    int i, numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    for ((i = numero-1); i>=1; i--){
        numero = numero*i;
    }
    printf("%d",numero);
}