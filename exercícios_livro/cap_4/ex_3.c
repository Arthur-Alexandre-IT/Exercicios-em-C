#include <stdio.h>

void trocar(float *pa, float *pb) {
    float aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}

int main() {
    float a = 0, b = 0;
    printf("Digite o primeiro nunero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    trocar(&a, &b);

    printf("\nNumeros Trocados: %.2f, %.2f\n", a, b);
    return 0;
}