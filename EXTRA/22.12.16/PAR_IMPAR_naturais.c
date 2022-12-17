// par ou impar

#include<stdio.h>

void main(){
    
    // declara e recebe variaveis
    
    float numero;
    int i;

    printf("Digite um numero natural: \n");
    scanf("%f",&numero);

    // processamento
    
        if (numero/(int)numero != 1 || numero<0){
            printf("O numero digitado nao eh um numero natural.");
        }
            
        else if (((int)numero)%2 ==0 && numero>=0){
            printf("O numero %d eh par.", (int)numero);
        }

        else if(((int)numero)%2 != 0 && numero>=0){
            printf("O numero %d eh impar.", (int)numero);
        }

}
