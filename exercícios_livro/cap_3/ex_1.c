#include <stdio.h>

int main() {
    // 1.1 
int v[10], i;
 for (i = 1; i <= 10; i++)
 v[i] = 0;
// 1.2 
int v[10], i;
 for (i = 0; i < 10; i++)
 v[i] = 0;
 v[i] = 101;
// 1.3 
#define MAX 30;
 int v[MAX];
 for (i = 0; i < 10; i++)
 v[i] = 0;
    return 0;
}