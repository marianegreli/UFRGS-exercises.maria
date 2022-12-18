//  calcule o fatorial de um número inteiro positivo informado.

#include<stdio.h>
void main(){
    
    int n, i, fatorial=1, contador;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &n);

    if(n == 0){
        printf("1");
    }
    else{
    for(i=0; i < n ; i++){
        contador = (n-i);
        fatorial = contador*fatorial;
    }
    printf("%d", fatorial);
    }
}
