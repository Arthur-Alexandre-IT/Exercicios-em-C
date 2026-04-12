#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano para saber se e bissexto: ");
    scanf("%d", &ano);

    int eh_bissexto = ((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0);

    printf("%s\n", eh_bissexto ? "Ano Bissexto" : "Ano Nao Bissexto");

    return 0;
}