/*13. Faça um programa que lê e armazena 5 valores em
um arranjo de inteiros a1, depois lê e armazena 5
valores em outro arranjo de inteiros a2. Este programa
deve criar um terceiro arranjo de inteiros a3 de 10
posições, que deve armazenar os valores dos outros 2
arranjos, de modo que os 5 primeiros elementos são de
a1 e os demais são elementos de a2.*/

#include<stdio.h>
int main(){
    int a1[5], a2[5], a3[10], i, cont=-1;

    printf("Digite os valores do primeiro arranjo: ");
    for(i=0;i<5;i++){
        scanf(" %d", &a1[i]);
    }

    printf("Digite os valores do segundo arranjo: ");
    for(i=0;i<5;i++){
        scanf(" %d", &a2[i]);
    }

    for(i=0;i<10;i++){
        if(i<5) a3[i] = a1[i];
        else {
            cont++;
            a3[i] = a2[cont];}

        printf("%d ", a3[i]);
    }


    return 0;
}
