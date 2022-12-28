// Para n inteiros positivos fornecidos, indique os que são números perfeitos.
// Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao número.
// Ex.: 6 = 1 + 2 + 3.

#include<stdio.h>

int main(){

    int numero, n, i=1;

    printf("Insira a quantidade n de numeros a serem fornecidos: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){

        int flag = 1, teste=0,a=1;

        printf("Insira o numero: ");
        scanf(" %d", &numero);

        //mecanismo de achar os divisores

        while(flag){

            if(a<numero){

                if (numero%a == 0) teste += a;  

                a++;
            }

            else flag=0; 
        }

        if (teste == numero) printf("O numero %d eh um numero perfeito\n", numero);
        else printf("%d nao eh um numero perfeito\n", numero);

        }

    return 0;
}
