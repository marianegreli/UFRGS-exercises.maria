// calculo de IMC

#include<stdio.h>
#include<math.h>

void main(){

    // declara e recebe variaveis

    float peso,altura;
    
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    
    // imprime saida
    
    printf("Seu IMC eh %3.2f",(peso/pow(altura,2)));
}
