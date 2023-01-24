/*Faça um programa que lê duas strings e informa se são palíndromas
ou não. Duas strings são palíndromas, caso possam ser
lidas de frente para trás e de trás para frente,
resultando na mesma palavra.*/

#include<stdio.h>
#include<string.h>

#define MAX 100

int main(){
    char s1[MAX+1], s2[MAX+1];
    int i, a=1;

    printf("Entre com a primeira string: ");
    fgets(s1, MAX+1, stdin);

    s1[strlen(s1)-1] = '\0';

    printf("Entre com a segunda string: ");
    fgets(s2, MAX+1, stdin);

    s2[strlen(s2)-1] = '\0';

    for(i=0;i<(strlen(s1)); i++){
        if(s1[i] == s1[strlen(s1)-a]){
            a++;
        }
    }

    if( a-1 == strlen(s1)) printf("A primeira string eh um palindromo!\n");
    else printf("A primeira string nao eh um palindromo.\n");

    a=1;

    for(i=0;i<strlen(s2); i++){
        if(s2[i] == s2[strlen(s2)-a]){
            a++;
        }
    }

    if( a-1 == strlen(s2)) printf("A segunda string eh um palindromo!");
    else printf("A segunda string nao eh um palindromo.");

    return 0;
}
