#include <stdio.h>

int main () {
    int a = 10;
    int b = 3;
    int c = 4;

    printf("Divisao a/b (inteiro): %d\n", a/b);
    printf("Divisao a/b (real): %f\n", (float)a/b);
    printf("O resto da Divisao a/b: %d\n", a%b);
    printf("Resultado 4: %d\n", a > b && c == 4);
    printf("Resultado 5: %d\n", a != b || c < 2);
    printf("Resultado 6: %d\n", (a < b) ? a : b);

    return 0;
}   