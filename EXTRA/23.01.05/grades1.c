/*Faça um programa que processa as notas de 5
alunos. Este programa usa 4 vetores, n1, n2, n3, media.
As informações de cada aluno são representadas em uma 
posição nos 4 vetores.*/

#include<stdio.h>
int main(){
    float n1[5], n2[5], n3[5], media[5];
    int i, a;

    for(i=0;i<5;i++){
        a=1;

        printf("Digite a nota %d do aluno %d: ", a, i+1);
        scanf(" %f", &n1[i]);

        printf("Digite a nota %d do aluno %d: ", a+1, i+1);
        scanf(" %f", &n2[i]);
        
        printf("Digite a nota %d do aluno %d: ", a+2, i+1);
        scanf(" %f", &n3[i]);

        //media do aluno i+1 esta na posicao i

        media[i]=(n1[i]+n2[i]+n3[i])/3;
    }

    for(i=0;i<5;i++){
    printf("A media do aluno %d eh %.2f \n", i+1, media[i]);}

    return 0;
}
