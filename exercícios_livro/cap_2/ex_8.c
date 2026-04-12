#include <stdio.h>

int main () {
    const double pi = 3.141592;
    float volume, altura, raio;

    printf("\nDigite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("\nDigite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = pi * (raio*raio) * altura;

    printf("Volume do Cilindro: %.4f \n", volume);
    return 0;
}