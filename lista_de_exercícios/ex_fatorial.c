#include <stdio.h>

int fatorial(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fatorial(n);
}

int main () {
    int x;

    printf("Digite um numero inteiro que deseja o fatorial: ");
    scanf("%d", &x);

    printf("\nO fatorial de %d é: %d", x, fatorial(x));

    return 0;
}