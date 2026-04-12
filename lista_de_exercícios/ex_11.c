// Somador de 10 inteiros

#include <stdio.h>

int main () {
    int num[10];
    int res = 0;

    printf("### SOMADOR ### \n \n");
    
    for(int i = 0;i < 10;i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        printf("\n");
    };

    for(int i = 0;i < 10;i++) {
        res = res + num[i];
    };

    printf("A soma total é: %d\n", res);

    return 0;
}