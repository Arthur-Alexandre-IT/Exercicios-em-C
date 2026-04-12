// Tabuada de 1 a 10
#include <stdio.h>

int main () {
    int num[10];
    
    for (int i = 0;i < 11;i++) {
        num[i] = i*i;
    };

    for (int i = 0; i<11; i++) {
        printf("%d * %d = %d \n", i, i, num[i]);
    };

    return 0;
}