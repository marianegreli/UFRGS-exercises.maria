// Ler dois valores informados pelo teclado, calcular e informar a soma destes valores
#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    int valor1,valor2,soma;
    printf("Insira o primeiro valor:\n");
    scanf("%d", &valor1);
    printf("Insira o segundo valor:\n");
    scanf("%d", &valor2);
    soma = valor1+valor2;
    printf("A soma dos valores é %d",soma);
    return 0;
}