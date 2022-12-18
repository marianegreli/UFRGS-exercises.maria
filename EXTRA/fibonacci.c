// Maria Fernanda Liphaus Almeida Negreli
//18/02/22
//  leia um valor inteiro e informe o número equivalente de termos da Série de Fibonacci,
// considerando os dois primeiros dígitos 0 e 1.

#include<stdio.h>
void main(){

    int numero, a=0, i, b=1, c = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    for(i=0; i<=(numero-2); i++){
        c = a;
        a = b;
        b = c + a;
    }

    printf("A posicao %d eh o numero %d", numero, a);
}