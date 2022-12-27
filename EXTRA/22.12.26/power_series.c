#include<stdio.h>
#include<math.h>

int main(){
    int a=1, b=2, flag=1, exp=1, sinal =1;
    float x, tol, parcela, resultado=0;

    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    if (x>1 || x<(-1)){
        printf("Valor de x fora do intervalo!");
    }

    else{

        printf("Entre com o valor de tolerancia: ");
        scanf("%f", &tol);

        while(flag){

            parcela = sinal*pow(x,exp)/(a*b);
            a = a+2;
            b = b+2;
            exp = exp+2;
            sinal = sinal*(-1);

            if(fabs(parcela)<tol){
                flag = 0;
            }

            else{
                resultado = resultado + parcela;
            }

        }

        printf("O resultado foi %f", resultado);

    }

    return 0;
}
