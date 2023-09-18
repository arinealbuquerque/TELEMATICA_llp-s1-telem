#include <stdio.h>

int main() {
    int n = 1; 
    int l, c, A[n][n], B[n][n], C[n][n];
    printf("Elementos da matriz A:\n");
    for(l = 0; l < n; l++){
        for(c = 0; c< n; c++){
            printf("Elemento A[%d][%d]: ", l, c);
            scanf("%d", &A[l][c]);
        }
    }
    printf("Elementos da matriz B:\n");
    for(l = 0; l < n; l++){
        for(c = 0; c< n; c++){
            printf("Elemento B[%d][%d]: ", l, c);
            scanf("%d", &B[l][c]);
        }
    }
    for(l = 0; l < n; l++){
        for(c = 0; c< n; c++){
            C[l][c] = A[l][c] + B[l][c];
        }
    }
    printf("\nMatriz soma C:\n");
    for(l = 0; l < n; l++){
        for(c = 0; c< n; c++){
            printf("%d ", C[l][c]);
        }
        printf("\n");
    }
    return 0;
}