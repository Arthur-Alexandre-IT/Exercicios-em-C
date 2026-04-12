#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

//  a)
    a += b + c;
    printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

//  b)
    b *= c - d + 2;
    printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

//  c)    
    d %= a + a + a;
    printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);
    
//  d)    
    d -= c -= b -= a;
    printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);
    
//  e)    
    a += b += c += 7;
    printf("a = %d, b = %d, c = %d, d = %d\n\n", a, b, c, d);

    return 0;
}