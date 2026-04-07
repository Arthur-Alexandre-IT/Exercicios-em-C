// Preencher uma matriz 3x3
#include <stdio.h>

int main () {
    int matriz[3][3];
    int i,j;
    int contador = 1;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            matriz[i][j] = contador++;
        }
    }

    printf("\n Matriz Preenchida: \n");
    for(i=0; i<3; i++) {
        printf("\n\t");
        for(j=0; j<3; j++) {
            printf("%d ", matriz[i][j]);
        }
    };
    printf("\n");

    return 0;
};