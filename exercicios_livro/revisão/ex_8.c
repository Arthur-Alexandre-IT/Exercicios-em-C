#include <stdio.h>
int main() {
    int v[] = {10, 20, 30, 40, 50};
    int *p = v;
    printf("%d\n", *p);
    printf("%d\n", *(p + 2));
    p++;
    printf("%d\n", *p);
    printf("%d\n", *(p + 3));
    return 0;
}