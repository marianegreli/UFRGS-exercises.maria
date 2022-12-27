#include<stdio.h>
#include<math.h>

int main(){
    float massa_inicial, massa;
    int flag=1, t, thoras, tminutos, tsegundos, meiavida;

    // recebe a massa do usuário

    printf("Insira aqui a massa inicial em gramas: ");
    scanf("%f", &massa_inicial);
    printf("Insira a meia vida em segundos: ");
    scanf("%d", &meiavida);

    //processa ate a condicao desejada

    t = meiavida;

    while(flag){

        massa = massa_inicial*pow(0.5,(t/meiavida));

        if (massa<0.5){
            flag = 0;
        }

        else{
        t = t+meiavida;
        thoras = t/3600;
        tminutos = (t-thoras*3600)/60;
        tsegundos = (t-tminutos*60);
        }

    }

    printf("Massa inicial (gramas): %6.2f \
    \nTotal segundos %d \nMassa final: %f \
    \ntempo: %d horas, %d min e %d s", massa_inicial, t, massa, thoras, tminutos, tsegundos);

    return 0;
}
