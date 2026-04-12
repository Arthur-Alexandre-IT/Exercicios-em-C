#include <stdio.h>
#define N 10;

int main() {
    float numeros[10], media, maior_valor, menor_valor, soma, acima_media[10];
    int i = 0;
    maior_valor = numeros[0];
    menor_valor = numeros[0];
    for(i; i < 10; i++) {
        printf("Digite o %d° numero: ", i+1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    };

    for (i; i < 10; i++) {
        maior_valor = (numeros[i] > maior_valor) ? numeros[i] : numeros[0];
    };

    for (i; i < 10; i++) {
        menor_valor = numeros[0];
        menor_valor = (numeros[i] < menor_valor) ? numeros[i] : numeros[0];
    };

    media = soma/10;

    for (i; i < 10; i++) {
        if (numeros[i] > media) {
            acima_media[i] = numeros[i];
        };
    };

    for (i; i < 5; i++) {
        float aux = numeros[i];
        // 1 2 3 4 [5 6] 7 8 9 10
        // 10 9 8 7 6 5 4 3 2 1
        numeros[i] = numeros[10-i];
        numeros[10-i] = numeros[i];
    };

    for (i; i < 10; i++) {
        printf("%.2f, ",numeros[i]);
    }

    printf("\nSoma: %.2f\nMedia: %.2f\nMaior Valor: %.2f\nMenor Valor: %.2f", soma, media, maior_valor, menor_valor);
    return 0;
}dadssdas