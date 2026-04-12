// Tabuada Específica
#include <stdio.h>

int main () {
    int num;

    printf("\n ### SISTEMA DE TABUADA ### \n \n");

    printf("Digite um numero que deseja saber a tabuada (tem que 3ser um numero inteiro entre 1 a 10): ");
    scanf("%d", &num);

    if(num<11) {
        for(int i = 0; i<11; i++) {
        printf("%d * %d = %d \n", num, i, num * i);
    };
    } else {
        printf("Erro: O numero tem que ser inteiro e entre 1 e 10");
    }

    return 0;
}