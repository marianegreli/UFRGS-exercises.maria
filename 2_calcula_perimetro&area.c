/* Maria Fernanda Liphaus Almeida Negreli
01/12/2022
Calcula o perimetro e a area de um quadrado externo a um circulo */

#include<stdio.h>
#include<math.h>
#include<locale.h>

void main(){

    setlocale(LC_ALL,""); // roda o codigo em portugues

    float raio,perimetro,area,raiz_quadrada; //declara variaveis decimais
    raiz_quadrada = sqrt(2);

    printf("Entre com um valor para o raio: "); //imprime o comando para o usuario
    scanf("%f",&raio); //recebe o valor do raio
    perimetro = ((2*raio)/raiz_quadrada)*4; // calcula perimetro
    area = pow(((2*raio)/raiz_quadrada),2); // calcula area

    printf("Per�metro do maior quadrado: %2.2f\n�rea do maior quadrado: %2.2f",perimetro,area); //imprime a saida
}
