#include <stdio.h>

int acumula(int x) {
    int total = 0;
    total += x;
    return total;
}

int main () {
    int somador = 0;
    somador += acumula(2);
    somador += acumula(10);
    printf("%d \n", somador);
    return 0;
}