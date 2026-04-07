#include <stdio.h>

void trocar(int *a, int *b) {
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main () {
    int num_1, num_2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num_1);

    printf("\nDigite o segundo numero inteiro: ");
    scanf("%d", &num_2);

    trocar(&num_1, &num_2);
    printf("\nTroca: %d, %d \n", num_1, num_2);
    return 0;
}