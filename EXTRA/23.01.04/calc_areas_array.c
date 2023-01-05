/* São 100 terrenos. O programa deve usar 3 vetores: 
um para a largura lida, outro para o comprimento e outro a área calculada de cada terreno.
Uma mesma posição armazena informações sobre um mesmo terreno, nos 3 vetores. Por fim, o programa deve
informar quantos terrenos possuem área abaixo da média. */

#include<stdio.h>

int main(){
#define TERRENOS 100

int i, a=0;
float largura[TERRENOS], comp[TERRENOS], area[TERRENOS], soma=0, media;

for(i=0;i<TERRENOS;i++){
    printf("Digite a largura do terreno %d: ", i+1);
    scanf(" %f", &largura[i]);
    printf("Digite o comprimento do terreno %d: ", i+1);
    scanf(" %f", &comp[i]);
    area[i] = largura[i]*comp[i];
    soma += area[i];
}

media = soma/TERRENOS;

for(i=0;i<TERRENOS;i++){
    if(area[i]<media) a++;
}

printf("A cidade possui %d terrenos com area abaixo da media", a);

return 0;
}
