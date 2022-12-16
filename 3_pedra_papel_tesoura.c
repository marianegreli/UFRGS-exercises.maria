/* Maria Fernanda Liphaus Almeida Negreli
08-12-2002 - Turma C
pedra, papel e tesoura */

#include<stdio.h>
#include<ctype.h>

void main(){
    char jogada1,jogada2;

    printf("Entre com suas jogadas: ");
    scanf(" %c %c",&jogada1,&jogada2);
    jogada1 = toupper(jogada1);
    jogada2 = toupper(jogada2);

    if (jogada1 == jogada2)
        printf("Empate!");

    else if (jogada1 == 'P'){
            switch(jogada2){
            case 'R':
                printf("Papel cobre pedra! O jogador 1 venceu.");
                break;
            case 'T':
                printf("Tesoura corta papel! O jogador 2 venceu.");
                break;
            }
    }
    else if (jogada1 == 'R'){
            switch(jogada2){
            case 'T':
                printf("Pedra quebra tesoura! O jogador 1 venceu.");
                break;
            case 'P':
                printf("Papel cobre pedra! O jogador 2 venceu.");
                break;
            }
    }
    else if (jogada1 == 'T'){
            switch(jogada2){
            case 'P':
                printf("Tesoura corta papel! O jogador 1 venceu.");
                break;
            case 'R':
                printf("Pedra quebra tesoura! O jogador 2 venceu.");
                break;
            }
    }
}
