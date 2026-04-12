// Média (5 Notas)
#include <stdio.h>

int main() {
    float notas[5];
    float media = 0;

    printf("### MEDIA DE NOTAS ### \n \n");

    for (int i = 1;i < 6;i++) {
        printf("Digite a %d° nota: ", i);
        scanf("%f", &notas[i]);
        media+=notas[i];
    };

    media /= 5;

    printf("A media das notas e: %.2f \n", media);

    return 0;
}