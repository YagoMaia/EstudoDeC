#include <stdio.h>

int main(void){
    int number;
    printf("Digite um numero para a analise:\n");
    scanf("%d", &number);
    if (number < 0){
        printf("Esse numero e negativo");
    }
    else{
        if (number > 0){
            printf("Esse numero e positivo");
        }
        else{
            printf("Esse numero e nulo");
        }
    }
    return 0;
}