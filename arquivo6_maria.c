// Maria Fernanda Liphaus Almeida Negreli
//15/12/2022

#include<stdio.h>
#include<math.h>

void main(){

    // entradas

    float x, arctan=0;
    int i, ntermos, c=1;

    printf("Entre com o valor de x para calcular arctan(x): ");
    scanf("%f", &x);

    // teste de intervalo

    if (x>=1 || x<=-1){
        printf("Valor invalido!");
    }

    else{
    printf("Entre com o numero de termos: ");
    scanf("%d", &ntermos);

    // calculo da arctan(x)

    for(i=1; i<=ntermos*2; i=i+2, c=c*(-1)){
            arctan = arctan + c*(pow((x),i)/(i));
        }

    // imprime a resposta

    printf("Angulo em radianos: %2.6f\nAngulo em graus = %f", arctan, (arctan*180/M_PI));
    }
}
