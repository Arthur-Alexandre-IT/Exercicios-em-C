#include <stdio.h>
#define N 4

// int matriz_transposta (a[N][N], b[N][N]) {
//     for(int i=0; i < N; i++){
//         for(int j=0; j<N; j++){
//             matriz_B[i][j] = matriz_A[j][i];
//         }
//     }
// }

int main () {
    int matriz_A[N][N];
    int matriz_B[N][N];

    for(int i=0; i < N; i++) {
        for(int j=0; j < N; j++) {
            printf("\nDigite o %d° numero: ", j++);
            scanf("%d", &matriz_A[i][j]);
            matriz_B[i][j] = matriz_A[j][i];
            // printf("%d, ", matriz_B);
            // printf("%d", matriz_B);
        };
    };

    for(int i=0; i < N; i++) {
        for(int j=0; j < N; j++) {
            printf("%d, ", matriz_B);
            // printf("%d", matriz_B);
        };
                
    }
    return 0;
}