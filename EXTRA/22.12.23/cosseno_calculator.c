#include<stdio.h>
#include<math.h>

int main (){
    int sinal=(-1), exp=2, i, fatorial=1, flag=1;
    float angulo, parcela, cosseno=0;

    printf("Entre com o valor do angulo em graus: ");
    scanf("%f", &angulo);

    angulo = angulo*M_PI/180;

    while(flag){

        for((i=exp-1);i<exp;i++){
            fatorial = fatorial*exp*i;
        }

        parcela = sinal*pow(angulo,exp)/fatorial;
        sinal=sinal*(-1);
        exp = exp+2;

        cosseno = cosseno + parcela; 

        if((fabs(parcela))<0.0000001)
            flag = 0;

    }

    printf("O valor do cosseno e %f", 1+cosseno);

    return 0;
}
