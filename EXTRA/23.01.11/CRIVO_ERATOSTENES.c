//Crivo de Eratóstenes.

#include<stdio.h>
 int main(){

    int n;
    printf("Digite a quantidade de numeros primos que voce deseja calcular: ");
    scanf("%d", &n);

    int vetor[n], cont=3, i, flag=1, tamanho=0;
    vetor[0] = 2;

        while(flag){

            int a=0;

            for(i=0;i<=tamanho;i++){

                if(cont%vetor[i]==0){
                    i=tamanho+1;
                }
                else{
                    a++;
                }
            }

            if(a==tamanho+1){
                tamanho++;
                vetor[tamanho] = cont; 
                }

            cont++;

            if(tamanho==n){
                flag=0;
                for(i=0;i<n;i++){
                    printf(" %d", vetor[i]);
                    }
            }
        }

    return 0;
 }
