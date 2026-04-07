#include <stdio.h>
int main() {
    int x = 100;
    int *p = &x;
    printf("A: %d\n",  x);
    printf("B: %d\n", *p);
    *p = 200;
    printf("C: %d\n",  x);
    printf("D: %d\n", *p);
    return 0;
}