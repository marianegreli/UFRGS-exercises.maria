// inverte a ordem de uma lista de numeros em um vetor

#include<stdio.h>
int main(){

    int vetor[5], i, copia[5], a=0;

    for(i=0;i<5;i++){
        scanf(" %d", &vetor[i]);
        copia[a] = vetor[i];
        a++;
    }

    i = -1;
    for(a=4;a>=0;a--){
        i++;
        vetor[i] = copia[a];
    }

       /* printf("O vetor original eh: ");
        for(a=0;a<5;a++) {printf("%d ", copia[a]);} */

        printf("O vetor invertido eh: ");
        for(i=0;i<5;i++) {printf("%d ", vetor[i]);}

    return 0;
}
