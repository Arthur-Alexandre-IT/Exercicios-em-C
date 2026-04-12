#include <stdio.h>

int main() {
    int qtd;
    float preco, total;

    printf("%-15s %6s %10s %10s\n", "PRODUTO", "QTD", "PRECO UNIT", "TOTAL");

    qtd = 30;
    preco = 2.50;
    total = qtd * preco;
    printf("%-15s %6d %10.2f %10.2f\n", "Caneta", qtd, preco, total);

    qtd = 15;
    preco = 1.20;
    total = qtd * preco;
    printf("%-15s %6d %10.2f %10.2f\n", "Borracha", qtd, preco, total);

    qtd = 10;
    preco = 12.90;
    total = qtd * preco;
    printf("%-15s %6d %10.2f %10.2f\n", "Caderno", qtd, preco, total);

    qtd = 8;
    preco = 3.75;
    total = qtd * preco;
    printf("%-15s %6d %10.2f %10.2f\n", "Regua", qtd, preco, total);

    return 0;
}