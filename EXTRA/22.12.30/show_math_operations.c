//  mostra ao usuário uma serie de operações matematicas precedidas de um índice. com base na escolha do usuário, o programa efetua essas operações.

#include<stdio.h>
int main(){
    int flag=1, o=1;

     while(flag){

        float N1=0, N2 =0;

        printf("\n1) Soma \n2) Subtracao \n3) Multiplicacao \n4) Divisao \n5) Sair\n");
        scanf("%d", &o);

        if(o!=5){
            printf("\nDigite dois valores para a operacao: ");
            scanf(" %f %f", &N1, &N2);
            switch(o){
                case 1:
                printf("%.2f\n", (N1+N2));
                break;
                case 2:
                printf("%.2f\n", N1-N2);
                break;
                case 3:
                printf("%.2f\n", N1*N2);
                break;
                case 4:
                printf("%.2f\n", N1/N2);
                break;
            }
        }
        else{
            flag=0;
        }

     }

    return 0;
}
