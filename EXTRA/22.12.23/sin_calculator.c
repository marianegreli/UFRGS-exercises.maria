int main(){
    int sinal=(-1), exp=3, fatorial=1, i=1, flag=1;
    float parcela=0, seno=0, angulo;

    printf("Insira o valor do angulo em graus: ");
    scanf(" %f",&angulo);

    // converte graus para radianos

    angulo = angulo*M_PI/180;

    // calcula uma parcela e incrementa no seno

    while(flag){

        for((i=exp-1);i<exp;i++){
        fatorial = fatorial*exp*(i);       
        }

        parcela = sinal*(pow(angulo,exp))/fatorial;
        seno = seno + parcela;

        sinal = sinal*(-1);
        exp = exp+2;
        
        if((fabs(parcela))<0.0000001)
            flag=0;
    }

printf("Valor aproximado do seno: %f", (seno+angulo));

    return 0;
}
