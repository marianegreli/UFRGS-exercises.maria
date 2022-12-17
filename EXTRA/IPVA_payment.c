// Maria Fernanda Liphaus Almeida Negreli
//17/12/22
// identifica o mes do pagamento do IPVA pela placa

#include<stdio.h>

void main(){

    int placa, i, ultimo_digito;

    printf("Entre com a placa: ");
    scanf("%d", &placa);

    if (placa <1000 || placa> 9999){
        printf("Valor invalido!");
    }

    else{
        for(i=1000;i>=10;i=i/10){
            ultimo_digito = placa/i;
            placa = placa - i*ultimo_digito;
        }
        printf("Mes de vencimento ");

        switch (placa){
            case 1:
            printf("Janeiro");
            break;
            case 2:
            printf("Fevereiro");
            break;
            case 3:
            printf("Marco");
            break;
            case 4:
            printf("Abril");
            break;
            case 5:
            printf("Maio");
            break;
            case 6:
            printf("Junho");
            break;
            case 7:
            printf("Julho");
            break;
            case 8:
            printf("Agosto");
            break;
            case 9:
            printf("Setembro");
            break;
            case 0:
            printf("Outubro");
            break;
        }
    }
}
