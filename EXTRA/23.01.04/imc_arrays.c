/* Faça um programa que armazena informações de 5
pessoas em 3 vetores de 5 posições. No primeiro vetor,
são armazenados os pesos de cada pessoa, no segundo
vetor, são armazenadas as alturas de cada pessoa. No
terceiro vetor são armazenados os IMCs de cada
pessoa. Uma mesma posição, nos 3 vetores, armazena
informações de uma mesma pessoa. */

#include<stdio.h>
#include<math.h>

int main(){
    float peso[5], altura[5], imc[5];
    int i;

    for(i=0;i<5;i++){
        printf("Digite o peso da pessoa %d ", i+1);
        scanf(" %f", &peso[i]);
        printf("Digite a altura da pessoa %d ", i+1);
        scanf(" %f", &altura[i]);
        imc[i]=peso[i]/(pow(altura[i],2));
    }

    for(i=0;i<5;i++){
        printf("A pessoa %d tem peso %.2f, altura %.2f e imc igual a %.4f\n", i+1, peso[i], altura[i], imc[i]);}

    return 0;
}
