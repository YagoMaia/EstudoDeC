#include <stdio.h>

int main(void){
    char digitado[1];
    printf("Sera analisado os sinais de menor, maior, igual ou outro digitado\n");
    printf("Digite o sinal para ser analisado\n");
    scanf("%s", &digitado);
    printf("%s", digitado);
    if (digitado == ">"){
        printf("Sinal de maior");
    }
    else{
        printf("Outro sinal");
    }
    return 0;
}   