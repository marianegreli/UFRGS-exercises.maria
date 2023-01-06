/*Faça um programa que processa as notas de 5
alunos. Este programa usa 4 vetores, n1, n2, n3, media.
As informações de cada aluno são representadas em uma 
posição nos 4 vetores.*/

// e se eu quiser digitar todas as notas 1 de uma vez, depois todas as notas 2 e por ai vai?

#include<stdio.h>
int main(){
    float n1[5], n2[5], n3[5], media[5];
    int i, a;

    for(i=0;i<5;i++){
        a=1;
        printf("Digite a nota %d do aluno %d: ", a, i+1);
        scanf(" %f", &n1[i]);
    }
    for(i=0;i<5;i++){
        a=2;
        printf("Digite a nota %d do aluno %d: ", a, i+1);
        scanf(" %f", &n2[i]);}

    for(i=0;i<5;i++){
        a=3;
        printf("Digite a nota %d do aluno %d: ", a, i+1);
        scanf(" %f", &n3[i]);}

    for(i=0;i<5;i++){
        media[i]=(n1[i]+n2[i]+n3[i])/3;
        printf("A media do aluno %d eh %.2f \n", i+1, media[i]);}

    return 0;
}
