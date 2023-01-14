/* Faça um programa que lê 2 números de 4 dígitos
cada. Cada um desses números deve ser armazenado
em um vetor de 4 posições, onde cada posição
armazena um dígito. A seguir, armazene o resultado da
soma desses dois números em um vetor de 5 posições,
onde cada dígito do número resultante seja
armazenado em uma posição. Caso o valor resultante
possua apenas 4 dígitos, faça a primeira posição do
vetor resultante receber 0. */

#include<stdio.h>
#include<math.h>

int main(){

    int v1[4], v2[4], vr[5], i, a=1, valor1, valor2;
    vr[4] = 0;

        printf("Digite o %d numero: ", a);
        scanf(" %d", &valor1);
        a++;
        printf("Digite o %d numero: ", a);
        scanf(" %d", &valor2);
        
        
        for(i=0;i<4;i++){

            v1[i] = (int)(valor1/(pow(10,(3-i))))%10;
            v2[i] = (int)(valor2/(pow(10,(3-i))))%10;
        }

        for(i=4;i>0;i--){

            vr[i] = vr[i] + v1[i-1] + v2[i-1];

            if(vr[i]>9){
                vr[i] = vr[i] - 10;
                vr[i-1] = 1;
            }

            else{
                vr[i-1] = 0;
            }

        }
    
        for(i=0;i<5;i++){
            printf("%d", vr[i]);
        }

    return 0;
}
