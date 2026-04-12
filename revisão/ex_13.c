#include <stdio.h>

float calcularMedia(float *v, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(v + i);
    }
    return soma / n;
}

int main() {
    float vetor[5];
    float media;

    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    media = calcularMedia(vetor, 5);

    printf("%.2f\n", media);

    return 0;
}