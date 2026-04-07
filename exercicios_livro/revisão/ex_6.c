#include <stdio.h>
#include <string.h>
int main() {
    char s1[30] = "Linguagem ";
    char s2[10]   = "C";
    char abc[10] = "abc";
    char xyz[10] = "xyz";
    int comp1, comp2;

    strcat(s1, s2);
    printf("%s tem %ld caracteres.\n", s1, strlen(s1));

    comp1 = strcmp(abc, abc);
    comp2 = strcmp(abc,xyz);

    printf("\n \n comparacao: %d \n", comp2);

    return 0;
}