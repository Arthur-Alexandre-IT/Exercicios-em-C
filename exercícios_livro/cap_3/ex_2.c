#include <stdio.h>
#define N 10

int main() {
    float numeros[N], media, maior_valor, menor_valor, soma = 0;

    for(int i = 0; i < N; i++) {
        printf("Digite o %d° numero: ", i+1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    };

    maior_valor = numeros[0];
    menor_valor = numeros[0];

    for (int i = 1; i < N; i++) {
        maior_valor = (numeros[i] > maior_valor) ? numeros[i] : maior_valor;
        menor_valor = (numeros[i] < menor_valor) ? numeros[i] : menor_valor;
    };

    media = soma/N;

    printf("\nSoma total: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior Valor: %.2f\n", maior_valor);
    printf("Menor Valor: %.2f\n", menor_valor);

    printf("\nNumeros somente acima da media: \n");
    for (int i = 0; i < N; i++) {
        if (numeros[i] > media) {
            printf("Indice [%d]: %.2f\n", i, numeros[i]);
        };
    };

    printf("\nVetor Invertido: \n");
    for (int i = N - 1; i >= 0; i--) {
        printf("%.2f | ", numeros[i]);
    };
    printf("\n");

    return 0;
}