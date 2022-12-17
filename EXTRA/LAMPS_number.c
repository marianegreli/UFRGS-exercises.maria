// Maria Fernanda Negreli
// 17/12/22
//calcula o número de lâmpadas necessárias para iluminar o quarto

#include<stdio.h>

void main(){

    // declara e recebe variaveis

    float largura, comprimento, numero_lam;
    int potencia;

    printf("Entre com a largura e o comprimento do quarto (cm): ");
    scanf(" %f %f", &largura, &comprimento);

    printf("Entre com a potencia das lampadas: ");
    scanf("%d", &potencia);

    // define numero de lampadas como decimal

    numero_lam = ((largura*comprimento*0.0001*16)/potencia);

    // transforma o numero de lampadas para um inteiro e imprime resultado

    if (numero_lam-(int)numero_lam == 0){
        printf("Numero de lampadas: %d", (int)numero_lam);
    }

    else{
    printf("Numero de lampadas: %d", (int)numero_lam+1);}

}
