#include <stdio.h>

float media(float v[], int n) {
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    };
    float media = soma/n;
    return media;
};

float maior (float v[], int n) {
    int maior_valor = v[0];
    for(int i = 0; i<n; i++) {
        maior_valor = (v[i] > maior_valor) ? v[i] : maior_valor;
    };
    return maior_valor;
};

void inverter (int v[], int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    };
};

void imprimir (int v[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d, ", v[i]);
  };
  printf("\n");
};

int main() {
    float vf_1[] = {10.1, 20.5, 30.2, 40.0};
    float vf_2[] = {1.2, 9.4};

    int vi_1[] = {1, 2, 3};
    int vi_2[] = {50, 40, 30, 20, 10};

    printf("\n\n\tVETOR REAL 1\n");
    printf("\nMedia dos numeros: %.2f\n", media(vf_1, 4));
    printf("\nMaior valor: %.2f\n", maior(vf_1, 4));

    printf("\n\n\tVETOR REAL 2\n");
    printf("\nMedia dos numeros: %.2f\n", media(vf_1, 2));
    printf("\nMaior valor: %.2f\n", maior(vf_1, 2));

    printf("\n\n\t VETOR INTEIRO 1\n");
    printf("\nValor Original: "); 
    imprimir(vi_1, 3);

    inverter(vi_1, 3);
    printf("\nValor Invertido: ");
    imprimir(vi_1, 3);

    printf("\n\n\t VETOR INTEIRO 2\n");
    printf("\nValor Original: "); 
    imprimir(vi_2, 5);

    inverter(vi_2, 5);
    printf("\nValor Invertido: ");
    imprimir(vi_2, 5);

    return 0;
}