/*Faça um programa que lê e armazena as idades e
os pesos de 5 pessoas e 2 vetores (um de idades e um
de pesos), onde cada posição armazena informações de
uma pessoa, nos dois vetores. A seguir, o programa
deve informar as idades das pessoas que possuem o
maior peso informado. Por exemplo: 
a. Idades: 12 24 18 34 56 
b. Pesos: 65 99 80 99 87 
c. Neste caso, o maior peso é 99 e as idades das
pessoas que tem esse peso são 24 e 34.*/

#include<stdio.h>
int main(){
    int idade[5], i, flag=1;
    float peso[5], maior=0;

    for(i=0;i<5;i++){
        printf("Entre com a idade da pessoa %d: ", i+1);
        scanf(" %d", &idade[i]);
        printf("Entre com o peso da pessoa %d: ", i+1);
        scanf(" %f", &peso[i]);
        
        if(peso[i]>maior){
            maior = peso[i];
        }
    }

    printf("As pessoas que tem peso igual a %.2f quilos tem ", maior);

    for(i=0;i<5;i++){
        if(peso[i]==maior){
            printf("%d anos", idade[i]);

            if(flag){
                printf(" e ");
                flag=0;}
        }
    }

    return 0;
}
