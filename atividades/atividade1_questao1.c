#include <stdio.h>

int main() {
    int n = 3; 
    int l, c, mat[n][n];
    printf("Digite os elementos da matriz:\n");
    for(l = 0; l < n; l++){
        for(c = 0; c< n; c++){
            printf("Elemento [%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
    printf("\nMatriz inserida:\n");
    for(l = 0; l < n; l++){
        for(c = 0; c< n; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Diagonal principal:\n");
    for(l = 0; l < n; l++){
        printf("%d ", mat[l][l]); 
    }
    return 0;
}
