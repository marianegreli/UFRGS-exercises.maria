#include<stdio.h>
#include<math.h>

int main(){
    double x, expoente = 0, fatorial = 1, n=0, flag=1;
    double serie=0, parcela;

    printf("Insira o valor de x: ");
    scanf("%lf", &x);

    while(flag){

        if(exp(x)-fabs(serie)<0.0001)
            flag = 0;

        else{

            //fatorial

            if(n==0) fatorial = 1;
            else fatorial = fatorial*n;

            // parcelas

            parcela = pow(x,expoente)/fatorial;
            expoente++;
            n++;

            //acumulado

            serie += parcela;
        }

    }

    printf("o valor calculado foi %f \
    \nO valor de EXP eh %f", serie, exp(x));

    return 0;
}
