#include <stdio.h>

int maior (int a, int b) {
    return (a > b) ? a : b;
};

int menor (int v[], int n) {
    int aux = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < aux) {
            aux = v[i];
        }
    };

    return aux;
};

int pares_maiores (int v[], int n) {
    int maior_soma = v[0] + v[1];
    int pares[2];

    for (int i = 0; i < n - 1; i++) {
        if ((v[i] + v[i+1]) > maior_soma) {
            maior_soma = v[i] + v[i+1];
            pares[0] = v[i];
            pares[1] = v[i+1];
        }
    };
    return printf("Maior par de vizinhos: %d, %d (Soma: %d)", pares[0], pares[1], maior_soma);
};

int main () {

    printf("O maior número é: %d \n", maior(10, 2));

    int vetor[5] = {12, 1, 50, 22, 40};

    printf("\nO menor valor do vetor é: %d \n", menor(vetor, 5));

    int vetor_2[5];

    printf("\nDigite 5 numeros inteiros. ");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor_2[i]);
    };

    printf("\nO numero menor digitado é: %d", menor(vetor_2, 5));

    printf("\nOs maiores pares vizinhos do vetor sao: %d", pares_maiores(vetor_2, 5));

    return 0;
}