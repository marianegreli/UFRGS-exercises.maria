/*Lê um texto e um trecho. O programa deve indicar se o trecho aparece
no texto, quantas vezes e deve informar o índice do caractere no texto em
que op trecho começa e o índice em que termina.
*/

#include<stdio.h>
#include<string.h>
#define MAX1 100
#define MAX2 20

int main(){

    char s1[MAX1+1], s2[MAX2+1];
    int i, tam1, tam2, flag=1, cont = 0, final[MAX2]={0}, vezes=0, aux=0, tamaux;

    printf("Digite seu texto: ");
    fgets(s1, MAX1+1, stdin);

    s1[strlen(s1)-1] = '\0';
    tam1 = strlen(s1);

    printf("Digite o fragmento procurado: ");
    fgets(s2, MAX2+1, stdin);

    s2[strlen(s2)-1] = '\0';
    tam2 = strlen(s2);

    while(flag){
        for(i=0; i<=tam1; i++){
            if(s1[i] == s2[cont]){
                cont++;
                
                if(cont==tam2){
                    final[aux] = i;
                    aux++;
                    vezes++;
                }
            }
            else{
                cont=0;
            }
        }

        for(i=0; i<MAX2; i++){
            if(final[i]!=0) tamaux++;
        };

        if (vezes == 0){
            printf("O trecho nao esta no texto.");
            flag = 0;
        }

        else{

            printf("O trecho aparece no texto %d vezes: ", vezes);

            for(i=0; i<tamaux;i++){

                printf("comecando em %d e terminando em %d", final[i]-(tam2-1), final[i]);

                if(i<tamaux-1)
                    printf(", ");
                else printf(".");
            }

            flag = 0;
        }            
        
    }
    
    return 0;
}
