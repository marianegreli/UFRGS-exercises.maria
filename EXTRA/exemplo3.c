// Faça um programa que imprima a tabela ASCII de A até z,
// mostrando o caractere em bases octal, decimal e hexadecimal.#include <stdio.h>

int main() {
char letra;
for (letra = 'A'; letra <= 'z'; letra++)
printf("[%c] %3o %3d %3x\n", letra, letra, letra, letra);
return 0;
}