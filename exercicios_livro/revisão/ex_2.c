//Escreva um programa que leia dois números inteiros com scanf() e exiba: 
// a soma, a diferença, o produto, o quociente real (com 2 casas decimais) e o resto da divisão.

#include <stdio.h>

int main () {
    int num_1, num_2;
    
    printf("Escreva o primeiro numero inteiro: ");
    scanf("%d", &num_1);

    printf("Escreva o segundo numero inteiro: ");
    scanf("%d", &num_2);

    printf("\nSoma dos 2 numeros: %d \n \n", num_1 + num_2);
    printf("Diferenca dos 2 numeros: %d \n \n", num_1 - num_2);
    printf("Produto dos 2 numeros: %d \n \n", num_1 * num_2);
    printf("Quociente Real dos 2 numeros: %.2f \n \n", (float)num_1 / num_2);
    printf("Resto da divisao dos 2 numeros: %d \n \n", num_1 % num_2);

    return 0;
}