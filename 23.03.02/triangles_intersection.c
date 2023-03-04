// Maria Fernanda Liphaus Almeida Negreli
// 02 / 03 / 23

// Programa que vê interseccao de triangulos no plano

#include<stdio.h>
#define NUM_COLUNAS 4

int num_ret(void);
int intersect(float a[NUM_COLUNAS], float b[NUM_COLUNAS]);

int main(){

    int num_retangulos;
    int interseccao = 1;
    int num_interseccoes = 0;
    int l, c, j, i;
    int aux = 1;

    float a[NUM_COLUNAS], b[NUM_COLUNAS];

    num_retangulos = num_ret();
    float matriz[num_retangulos][NUM_COLUNAS];


    for(l = 0; l < num_retangulos ; l++){

            printf("Digite a coordenada esquerda: ");
            scanf("%f", &matriz[l][0]);
            scanf("%f", &matriz[l][1]);

            printf("Digite a coordenada direita: ");
            scanf("%f", &matriz[l][2]);
            scanf("%f", &matriz[l][3]);
    }

    // testando as interseccoes

    for( i = 0 ; i < num_retangulos - 1 ; i++ ){

        for( j = aux ; j < num_retangulos ; j++ ){

            // quero acessar a linha a da matriz:
             for(c = 0; c < NUM_COLUNAS; c++){
                a[c] = matriz[i][c];
             }

             // quero acessar a linha b da matriz:
             for(c = 0; c < NUM_COLUNAS; c++){
                b[c] = matriz[j][c];
             }

             interseccao = intersect(a, b);

             if(interseccao != 5){

                printf("Interseccao entre os retangulos %d e %d", i, j);
                printf("\n");
                num_interseccoes++;
            }
        }

        aux ++;
    }

    printf("O nro de ocorrencias de interseccao eh %d", num_interseccoes);

    return 0;
}

int num_ret(void){

        int num_retangulos;

        do {

            printf("Digite o numero de retangulos: ");
            scanf("%d", &num_retangulos);


        } while(num_retangulos > 10 || num_retangulos < 2);

        return num_retangulos;
}


int intersect(float a[NUM_COLUNAS], float b[NUM_COLUNAS]){

        // casos de nao interseccao:
        if((a[0] > b[2]) || (a[3] < b[1]) || (a [1] > b[3]) || (a[2] < b[0])){
            return 5;
        }

}
