#include <stdio.h>

int main () {
    char letra_minuscula, letra_maiscula;
    int cod_letra_minuscula;
    printf("Digite uma letra: ");
    letra_minuscula = getchar();

    cod_letra_minuscula = (int)letra_minuscula;

    (cod_letra_minuscula >= 97 && cod_letra_minuscula <= 122) ? cod_letra_minuscula -= 32 : cod_letra_minuscula;

    letra_maiscula = (char)cod_letra_minuscula;
    printf("\nLetra digitada em Maisculo: %c\n", letra_maiscula);

    return 0;
}