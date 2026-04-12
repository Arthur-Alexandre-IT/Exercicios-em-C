#include <stdio.h>

int main() {
    int C, P;
    int R, D;

    printf("--- MISTERIO DO CERCADO ---\n");
    
    printf("Digite o total de cabecas (C): ");
    scanf("%d", &C);
    
    printf("Digite o total de pes (P): ");
    scanf("%d", &P);

    R = (P - 2 * C) / 2; 
    
    D = C - R;           

    printf("Total de Coelhos no cercado: %d\n", R);
    printf("Total de Patos no cercado: %d\n", D);

    return 0;
}