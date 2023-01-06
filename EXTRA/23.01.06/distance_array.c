// O programa deve armazenar as coordenadas x e y de 10 pontos e encontrar a distância entre os dois pontos mais próximos.

#include<stdio.h>
#include<math.h>
#include<limits.h>

int main(){
    
    #define QUANTIDADE 10
    int i, x[QUANTIDADE], y[QUANTIDADE], r=0;
    float dist[(QUANTIDADE)*(QUANTIDADE-1)/2], menor = INT_MAX;

    for(i=0;i<QUANTIDADE;i++){
        printf("Entre com as coordenadas x e y do ponto %d: ", i+1);
        scanf(" %d", &x[i]);
        scanf(" %d", &y[i]);
    }


    for(i=1;i<QUANTIDADE;i++){
        int flag=1, cont=1;
            while(flag){
                if(cont<=i){
                    dist[r] = pow((pow((x[i]-x[i-cont]),2)+pow((y[i]-y[i-cont]),2)),0.5);
                    printf("%f\n", dist[r]);
                    cont++;
                    r++;
                    }
                else {
                    flag=0;
                }
            }
        }

    for(r=0;r<((QUANTIDADE-1)*QUANTIDADE/2);r++){
        if(dist[r]< menor){
            menor = dist[r];
        }
    }

    printf("A distancia entre os dois pontos mais proximos eh de %.2f metros", menor);

    return 0;
}
