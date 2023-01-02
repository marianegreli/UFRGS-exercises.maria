// Calcular a media de notas de X alunos.
// Informar, ainda, as notas que são superiores à média calculada.

#include<stdio.h>

int main(){

    int a, NUMALUNOS;
    
    printf("Para quantos alunos deseja calcular a media? ");
    scanf("%d", &NUMALUNOS);

    float nota[NUMALUNOS], media, soma=0;

    for(a=0; a<NUMALUNOS; a++){
        
        scanf(" %f",&nota[a]);

        soma+=nota[a]; 
    }

    media = soma/NUMALUNOS;

    printf("A media da turma eh %.2f", media);

    for(a=0;a<NUMALUNOS;a++){
        if((media)<nota[a]){
            printf("\nAcima da media: %.2f", nota[a]);
        }
    }
        
    return 0;
}
