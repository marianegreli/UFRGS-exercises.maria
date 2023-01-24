/*Programa que procura um trecho em um texto maior 
e indica quantas vezes ele aparece*/

#include<stdio.h>
#include<string.h>
#define MAX1 100
#define MAX2 20

int main(){

    char s1[MAX1+1], s2[MAX2+1];
    int i, tam1, tam2, flag=1, cont = 0, a =0, vezes=0;

    printf("Digite seu texto: ");
    fgets(s1, MAX1+1, stdin);

    s1[strlen(s1)-1] = '\0';
    tam1 = strlen(s1);

    printf("Digite o fragmento procurado: ");
    fgets(s2, MAX2+1, stdin);

    s2[strlen(s2)-1] = '\0';
    tam2 = strlen(s2);

    while(flag){
        for(i=0; i<tam1; i++){
            if(s1[i] == s2[a]){
                cont++;
                a++;
                if(cont==tam2){
                    vezes++;
                }
            }
            else{
                a=0;
                cont=0;
            }
        }

        if (vezes ==0 ){
            printf("O trecho nao esta no texto.");
            flag = 0;
        }

        else{
            printf("O trecho aparece no texto %d vezes.", vezes);
            flag = 0;
        }            
        
    }
    
    return 0;
}
