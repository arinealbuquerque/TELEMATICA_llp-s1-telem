#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if(n == 1){
        return 1;
    }else{
        return n + somatorio(n-1);
    }
}

int main(){
    int n;
    printf("Número: ");
    scanf("%d", &n);
    printf("Somatório de %d = %d", n, somatorio(n));
    return 0;
}