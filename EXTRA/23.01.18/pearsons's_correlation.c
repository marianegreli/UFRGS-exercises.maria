// correlacao de pearson 

#include<stdio.h>
#include<math.h>

int main(){

#define N 10

float vx[N], vy[N], cor, num=0, den1=0, den2 =0, mx=0, my=0;
int i;

printf("Entre com os valores de X: ");

for(i=0;i<N;i++){
	scanf(" %f", &vx[i]);
}

printf("Entre com os valores de Y: ");

for(i=0;i<N;i++){
	scanf(" %f", &vy[i]);
}

for(i=0;i<N;i++){

	mx += vx[i];
	my += vy[i];
}

mx = mx/N;
my = my/N;

for(i=0;i<N;i++){
	num += (vx[i]-mx)*(vy[i]-my);
	den1 += pow((vx[i]-mx),2);
    den2 += pow((vy[i]-my),2);
}
cor = num/(pow(den1,0.5)*pow(den2,0.5));

printf("%.2f", cor);

return 0;
}
