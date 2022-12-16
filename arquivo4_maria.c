/* Maria Fernanda Liphaus Almeida Negreli
08-12-2002 - Turma C
Expressa caracteristicas do numero N do teclado */

#include<stdio.h>
#include <string.h>

void main(){
    int valor, soma, unidade, dezena;
    printf("Entre com o valor de N: ");
    scanf("%d",&valor);

    // TESTE DO INTERVALO
    if (valor <20 || valor>39){
        printf("Valor fora do intervalo!");
    }
    else{
        unidade = valor%10;
        dezena = (valor/10);
        soma = dezena + unidade;
        printf("Soma dos algarismos: %d\n",soma);

            switch (dezena){
            case 2:
                printf("Extenso: Vinte ");
                break;
            case 3:
                printf("Extenso: Trinta ");
                break;
            }

            switch (unidade){
            case 1:
                printf("e um");
                break;
            case 2:
                printf("e dois");
                break;
            case 3:
                printf("e tres");
                break;
            case 4:
                printf("e quatro");
                break;
            case 5:
                printf("e cinco");
                break;
            case 6:
                printf("e seis");
                break;
            case 7:
                printf("e sete");
                break;
            case 8:
                printf("e oito");
                break;
            case 9:
                printf("e nove");
                break;
            }
    }
}
