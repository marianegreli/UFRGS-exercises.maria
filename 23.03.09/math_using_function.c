// Maria Fernanda Negreli
// CARTÃO 344331
// 09/02/23

#include <stdio.h>
#include <math.h>

float funcaoRaiz(float r, float x0, float t);

int main(){

    float raiz;
    float r;
    float x0;
    float t;

    // Recebe valor de r

    printf("Entre com o valor de r: ");
    scanf("%f", &r);

    printf("\n");

    // Recebe valor de x0

    printf("Entre com o valor de x0: ");
    scanf("%f", &x0);

    printf("\n");

    // Recebe a tolerância

    printf("Entre com a tolerancia: ");
    scanf("%f", &t);

    printf("\n");

    // Testa consistência do valor da tolerância

    if(t <= 0){

        printf("Valor de t invalido!");
    }
    else{

        raiz = funcaoRaiz(r, x0, t);
        printf("A raiz cubica aproximada de %f eh %f", r, raiz);
    }

    return 0;
}

float funcaoRaiz(float r, float x0, float t){

    int flag = 1;
    float num = 0;
    float den = 0;

    while(flag){

        num = pow(x0,3) - r;
        den = pow(x0,2) * 3;

        if(fabs(num) < t){

            flag = 0;
        }

        else{

            x0 = x0 - num/den;
        }

    }

    return x0;

}
