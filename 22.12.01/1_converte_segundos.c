/* Maria Fernanda Liphaus Almeida Negreli
01/12/2022
Converte segundos para dias, horas e minutos */

#include<stdio.h>
int main(void){

    int segundos_trabalhados,dias,horas,minutos,segundos; //delara variaveis inteiras

    printf("Entre com o total de segundos:"); //comando ao usuario
    scanf("%d",&segundos_trabalhados); //le o numero de segundos do teclado

    dias = segundos_trabalhados/(86400); // acha o numero (inteiro) de dias
    horas = segundos_trabalhados/(3600)-dias*24; // acha o numero (inteiro) de horas restantes
    minutos = segundos_trabalhados/(60)-(horas*60+dias*1440); // acha o numero (inteiro) de minutos restantes
    segundos = segundos_trabalhados -(horas*3600+dias*86400+minutos*60); // acha o numero (inteiro) de segundos restantes

    printf("%d Dia(s) %d hora(s) %d min(s) %d sec(s)",dias,horas,minutos,segundos); // imprime a saida
    return 0;
}
