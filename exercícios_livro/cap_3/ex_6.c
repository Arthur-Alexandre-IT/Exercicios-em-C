#include <stdio.h>
#include <string.h>

void ler_dados(char a[][51],float b[], int n) {
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("Digite o nome do %d° aluno: ", i+1);
        scanf("%s", &a[i][0]);
        printf("Digite a nota do %d° aluno: ", i+1);
        scanf("%f", &b[i]);
        printf("\n");
    };
    printf("\n");
};

void exibir_notas(float v[], int n) {
    printf("\n");
    for(int i = 0; i<n; i++) {
        printf("Nota do %d° aluno: %.2f \n", i+1, v[i]);
    };
    printf("\n");
};

void maior_nota (float a[], char b[][51], int n) {
    float maior_nota = a[0];
    int indice = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] > maior_nota) {
            maior_nota = a[i];
            indice = i;
        } else {maior_nota;};
    };
    printf("O aluno com maior nota: %s | Nota: %.2f \n", b[indice], maior_nota);
};

void aprovados (char nomes[][51], float notas[], int n) {
    printf("\nAlunos Aprovados (Nota >= 6.0):\n");
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 6.0) {
            printf("- %s | Nota: %.2f\n", nomes[i], notas[i]);
        }
    };
    printf("\n");
};

void ordenar_por_nome(char nomes[][51], float notas[], int n) {
    char aux_nome[51];
    float aux_nota;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(nomes[j], nomes[j+1]) > 0) {
                strcpy(aux_nome, nomes[j]);
                strcpy(nomes[j], nomes[j+1]);
                strcpy(nomes[j+1], aux_nome);

                aux_nota = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = aux_nota;
            }
        }
    }
}

void exibir_dados(char nomes[][51], float notas[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%s - Nota: %.2f\n", nomes[i], notas[i]);
    }
}

int main () {
    float notas[5];
    char nomes[5][51];

    ler_dados(nomes, notas, 5);
    maior_nota(notas, nomes, 5);
    aprovados(nomes, notas, 5);
    
    printf("\nLista em Ordem Alfabetica:\n");
    ordenar_por_nome(nomes, notas, 5);
    exibir_dados(nomes, notas, 5);

    return 0;
}