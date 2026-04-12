#include <stdio.h>

int main () {
    float salario_bruto, salario_liquido, imposto;
    int dias;
    
    printf("\nEscreva dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = 20.00 * dias;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto - imposto;

    printf("\n\tSalario Bruto: R$ %.2f", salario_bruto);
    printf("\n\tSalario Liquido: R$ %.2f", imposto);
    printf("\n\tSalario Liquido: R$ %.2f\n", salario_liquido);
    return 0;
}