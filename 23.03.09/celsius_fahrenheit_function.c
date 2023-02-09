// Maria Fernanda Negreli
// CARTÃO 344331
// 09/02/23

#include <stdio.h>

float f_to_c(void);
float c_to_f(void);

int menu(void);

int main(){

    int opcao;
    int flag = 1;
    float resp = 0;

    while(flag){

        opcao = menu();

        if(opcao == 1){

            resp = c_to_f();

            printf("Temperatura equivalente em fahrenheit ");
            printf("%.2f", resp);

            printf("\n");
            printf("\n");
        }

        else if(opcao == 2){

            resp = f_to_c();

            printf("Temperatura equivalente em celsius ");
            printf("%.2f", resp);

            printf("\n");
            printf("\n");
        }

        else{

            flag = 0;
        }

    }

    return 0;

}


int menu(void){

    // Apresenta o menu, lê e retorna a opção do usuário

    int opcao;

    printf("Entre com uma das opcoes: \n");
    printf("1: Converte centigrados para fahrenheit \n");
    printf("2: Converte fahrenheit para centigrados \n");
    printf("3: Sair \n");
    printf("\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    return opcao;

}


float f_to_c(void){

    // Lê uma temperatura em fahrenheit, converte para centigrados e retorna

    float tempC;
    float tempF;

    printf("Entre com a temperatura em graus fahrenheit: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32)*((float)5/9);

    return tempC;
}


float c_to_f(void){

    // Lê uma temperatura em  celsius, converte para fahrenheit e retorna

    float tempC;
    float tempF;

    printf("Entre com a temperatura em graus celcius: ");
    scanf("%f", &tempC);

    tempF = tempC*((float)9/5) + 32;

    return tempF;
}

