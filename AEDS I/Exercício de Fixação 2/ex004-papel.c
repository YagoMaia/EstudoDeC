#include <stdio.h>

int main(void){
    int N, i, prod = 1, aux;
    printf("Digite um número para calcular seu fatorial:\n");
    scanf("%d", &N);
    aux = N;
    for(i = 1; i < N; i++){
        prod = prod * aux * (N - i);
        aux = 1;
    }
    printf("%d! = %d\n", N, prod);
    return 0;
}