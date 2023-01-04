/*. Faça um programa que lê 5 valores e os armazena em
um vetor de 5 posições. O programa deve armazenar
os valores deste vetor em um segundo vetor, mas na
ordem inversa. Exiba na tela o vetor resultante.*/

int main(){
    int vetor1[5], vetor2[5];
    int i, a=0;

    for(i=0;i<5;i++){
        scanf(" %d", &vetor1[i]);
    }

    for(i=4;i>=0;i--){
        vetor2[a] = vetor1[i];
        a++;
    }

    printf("O vetor original era: ");
    for(i=0;i<5;i++){
        printf("%d ", vetor1[i]);}
    printf("\nO vetor final ficou: ");
    for(a=0;a<5;a++){
        printf("%d ", vetor2[a]);}

    return 0;
}
