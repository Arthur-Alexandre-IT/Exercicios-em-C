#include <stdio.h>

int main (){
    float notas[5];
    float media = 0;

    for (int i=1;i<6;i++) {
        printf("Digite a %d nota: ", i);
        scanf("%f", notas[i]);

        media+= notas[i];
    };

    printf("A media da turma: %.2f \n \n", media/5);

    return 0;
}