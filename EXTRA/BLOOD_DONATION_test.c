// teste para doador de sangue

#include<stdio.h>

void main(){

    char tatuagem;
    float peso;
    int idade;

    printf("Voce fez tatuagem nos ultimos 12 meses (S/N)? ");
    scanf("%c", &tatuagem);
    tatuagem = toupper(tatuagem);

    if (tatuagem == 'S'){
        printf("Voce nao pode ser doador!");}

    else{

    printf("Qual seu peso? ");
    scanf("%f", &peso);

        if (peso<50){
            printf("Voce nao pode ser doador! ");}

        else{
            printf("Qual a sua idade? ");
            scanf("%i", &idade);

            if (idade<16 || idade>69){
                printf("Voce nao pode ser doador! ");}

            else{
            printf("Parabens! Voce pode ser doador! ");
            }
        }
    }
}
