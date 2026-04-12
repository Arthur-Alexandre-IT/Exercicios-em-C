/// Encontrar o maior elemento do vetor

#include <stdio.h>
int main() {
    int v[5] = {3, 7, 2, 9, 1};
    int i = 0;
    int maior = v[0];
    for (i = 0; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        };
    };
    printf("%d\n", maior);
    return 0;
}