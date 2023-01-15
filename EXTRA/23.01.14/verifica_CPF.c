/*Programa verificador de CPFs*/

#include<stdio.h>
#include<math.h>

int main(){

    double cpf, div, aux=0;
    int vetor[11], i, cont=0, a=10, soma=0, exp=10;

    printf("Digite o CPF para validacao: ");
    scanf("%lf", &cpf);

    // armazena cada digito em um vetor de 11 espaços

    for(i=0;i<9;i++){

        div = pow(10,(10-i));
        vetor[i] = (int)(cpf/div)%10;
        aux += vetor[i]*pow(10,exp);
        exp--;
    }

    vetor[9] = (int)((cpf - aux)/10);
    vetor[10] = (int)(cpf - aux) % 10;

    // validacao inicial de todos os numeros iguais

    for(i=1;i<11;i++){
        if(vetor[i] == vetor[i-1]){
            cont++;
        }
    }

    if(cont==10){
        printf("O CPF digitado eh invalido!");
    }

    else{

        // validação do primeiro digito

        for(i=0;i<9;i++, a--){
            soma += vetor[i]*a;
        }


        if(((soma*10)%11 != 10 && (soma*10)%11 != vetor[9]) || ( (soma*10)%11 == 10 && vetor[9] != 0)){
            printf("O CPF digitado eh invalido!");
        }

        else{

            // validação do segundo digito

            soma = 0;
            a = 11;

            for(i=0;i<10;i++, a--){
                soma += vetor[i]*a;
            }

            if(((soma*10)%11 != 10 && (soma*10)%11 != vetor[10]) || ( (soma*10)%11 == 10 && vetor[10] != 0)){
                printf("O CPF digitado eh invalido!");
            }

            else{
                printf("O CPF digitado eh valido!");
            }

        }

    }

    return 0;
}
