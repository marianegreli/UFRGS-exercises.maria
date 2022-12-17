// conversao real - dolar

#include<stdio.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,"");
    
    char tipo[0];
    float valor,total;
    
    printf("Digite para qual moeda deseja realizar a convers�o:\n");
    scanf(" %s",&tipo[0]);
    
    printf("Insira o valor:");
    scanf("%f",&valor);

        if (tipo[0] == "r" || tipo[0] == "R"){
            float conversao_real;
            printf("Insira taxa de conversão para real:");
            scanf("%f", &conversao_real);
            total = conversao_real*valor;
            printf("O valor em dolar é %6.2f",total);
            } 
            
        else{
            float conversao_dolar;
            printf("Insira taxa de conversão para dolar:");
            scanf("%f", &conversao_dolar);
            total = conversao_dolar*valor;
            printf("O valor em real é %6.2f",total);
            }
     
}
