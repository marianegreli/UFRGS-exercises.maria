// Maria Fernanda Liphaus Almeida Negreli
// 15/12/22
// imprime caracteristicas de alunos

#include<stdio.h>
void main(){

    // entradas

    int total, i=0, n=0, c=0, nvezes;
    float genero_fem, porc_3;

    char genero;

    printf("Entre com o numero total de alunos: ");
    scanf("%d", &total);

    // processamento

    for(i=0;i<total;i++){

        printf("\nEntre com o genero do aluno: ");
        scanf(" %c", &genero);
        if (genero == 'f'){
            n++;}

        printf("Entre com o numero de vezes que fez vestibular: ");
        scanf(" %d", &nvezes);

        if (nvezes>=3){
            c++;}
    }

    // imprime a resposta

    printf("Percentual alunos genero feminino %2.2f \nPercentual alunos vestibular 3 vezes ou mais: %2.2f", (100*(float)n/total),(100*(float)c/total));
}
