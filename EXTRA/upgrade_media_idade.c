// Calcular a idade média de um grupo de n pessoas, onde n é conhecido
// informando quantas pessoas do grupo tem idade inferior a 18 anos

#include<stdio.h>
void main(){
    float soma=0;
    int n, i, idade=0, c=0;
    printf("Insira o numero de pessoas: ");
    scanf("%d", &n);
    
        for(i=0; i < n; i++){
            printf("Entre com a idade: ");
            scanf("%d",&idade);
                if(idade < 18){
                    c++;
                }
            soma = idade + soma;
        }

        printf("A media de idades eh %2.2f\n%d pessoas tem menos de 18 anos.", (soma/n),c);
}