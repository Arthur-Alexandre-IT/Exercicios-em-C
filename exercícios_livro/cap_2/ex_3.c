#include <stdio.h>

int main() {
    int i = 1;
    int j = 2;
    int k = 3;
    int n = 2;
    float x = 3.3;
    float y = 4.4;

//  a)
    printf("a) %d \n\n", i < j + 3);

//  b)
    printf("b) %d \n\n", 2*i - 7 <= j - 8);

//  c)
    printf("c) %d \n\n",  -x + y >= 2.0*y);

//  d)
    printf("d) %d \n\n", x == y);

//  e)
    printf("e) %d \n\n", x != y);

//  f)
    printf("f) %d \n\n", i + j + k == -2 * -k);

//  g)
    printf("g) %d \n\n", !(n-j));

//  h)
    printf("h) %d \n\n", !n-j);

//  i)
    printf("i) %d \n\n", i&&j&&k);

//  j)
    printf("j) %d \n\n", i||j-3&&0);

//  k)
    printf("k) %d \n\n", i<j&&2>=k);

//  l)
    printf("l) %d \n\n", i==2||j==4||k==5);

    return 0;
}