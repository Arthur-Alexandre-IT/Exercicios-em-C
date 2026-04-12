//char, int, short, long, unsigned int, float, double
//[nome da variável] = [valor] — tipo: [tipo] — tamanho: [N] bytes
#include <stdio.h>

int main () {
    char letra = 'A';
    int numero = 10;
    short curto = 102;
    long longo = 10000;
    unsigned sem_sinal = 4000;
    float flutuante = 10.20;
    double pi = 3.14159265;

    printf("letra = %c — tipo: char — tamanho: %d bytes\n", letra, (int)sizeof(char));
    printf("numero = %d — tipo: int — tamanho: %d bytes\n", numero, (int)sizeof(int));
    printf("curto = %d - tipo: short - tamanho: %d bytes\n", curto, (int)sizeof(short));
    printf("longo = %ld - tipo: long - tamanho: %d bytes\n", longo, (int)sizeof(long));
    printf("sem_sinal = %u - tipo: unsigned int - tamanho: %d bytes\n", sem_sinal, (int)sizeof(unsigned int));
    printf("flutuante = %.2f - tipo: float - tamanho: %d bytes\n", flutuante, (int)sizeof(float));
    printf("pi = %.8f - tipo: double - tamanho: %d bytes\n", pi, (int)sizeof(double));
    return 0;
}