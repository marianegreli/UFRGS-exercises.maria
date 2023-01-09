/*O usuário informa a quantidade de valores que ele vai informar. 
O programa deve ler esses valores e armazenar em um vetor.
Depois, criar outros 2 vetores, um para os números pares
e outro para os ímpares. Ao fim, o programa
deve exibir na tela o conteúdo dos dois vetores
separados.*/

#include<stdio.h>
int main(){

    int n;
    
    printf("Informe a quantidade de valores que voce deseja informar: ");
    scanf("%d", &n);
    
    int vetor[n], vpar[n], vimpar[n], a=0, b=0, i;

    printf("Informe os %d valores: ", n);

    for(i=0;i<n;i++){
        scanf(" %d", &vetor[i]);

        if(vetor[i]%2==0){
            vpar[a] = vetor[i];
          //  printf("\no vetor par na posicao %d eh %d", a, vpar[a]);
            a++;
        }

        else{
            vimpar[b] = vetor[i];
           // printf("\no vetor impar na posicao %d eh %d", b, vimpar[b]);
            b++;
        }
    }

    // imprimindo os vetores

    printf("\nOs numeros pares digitados foram: ");

    for(i=0;i<a;i++){
        printf("%d ", vpar[i]);
    }

    printf("\nOs numeros impares digitados foram: ");

    for(i=0;i<b;i++){
        printf("%d ", vimpar[i]);
    }

    return 0;
}
