/*Faça um programa que lê 5 valores e os armazena
em um vetor de 5 posições. A seguir, o programa deve
ordenar esses valores no vetor. Note que o programa
deve funcionar também caso quiséssemos ordenar 10
valores.*/

#include<stdio.h>
#include<limits.h>

int main(){
    int n;
  
    // lê do usuário a quantidade de valores a serem ordenados e cria um vetor com essa quantidade de elementos
    
    printf("Insira a quantidade de valores que voce deseja ordenar: ");
    scanf("%d", &n);

    int vetor[n], i, a=0, menor = INT_MAX, flag=1;

    printf("Insira os %d valores: ", n);

    for(i=0;i<n;i++){
        scanf(" %d", &vetor[i]);
    }
  
    // loop para ordenação

    while(flag){

        int menor = INT_MAX;

        for(i=a; i<n; i++){
            
            if(vetor[i]< menor){
                menor = vetor[i];
                vetor[i] = vetor[a];
                vetor[a] = menor;
            }
        }

        a++;

        if(a==n){
            flag=0;
        }

    }
  
    // loop para impressão do vetor ordenado

    for(a=0;a<n;a++){
        printf(" %d", vetor[a]);
    }

    return 0;
}
