// retorna os n primeiros primos

#include<stdio.h>

int main(){
    int n, numero=1, qnt=0;
    printf("Digite a quantidade n de numeros primos que deseja calcular: ");
    scanf("%d", &n);

    while(qnt<n){

        int divisor=0, cont=1, flag=1;

        while(flag){

            if(numero%cont ==0){
            divisor++;
            cont++;
            }
            else{
            cont++;
            }

            if(cont > numero){
                flag=0;
                numero++;
            }
        }

        if(divisor == 2){
            printf("%d\n", numero-1);
            qnt++;
        }
    }

    return 0;
}
