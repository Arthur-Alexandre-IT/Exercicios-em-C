#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    int *p;

    p = &x;

    float resultado;

    resultado = (float)x / y;

    printf("Soma: %d\n", soma(x, y));

    printf("Endereco: %p\n", p);

    printf("Divisao: %f\n", resultado);

    return 0;
}
