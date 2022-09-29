#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int valor, menor;
    printf("Digite números para analisar qual foi o menor número digitado:\nDigite 0 para finalizar o programa.\n");
    while (valor != 0){
        printf("Digite um número inteiro maior que zero:\n");
        scanf("%d",&valor);
        while (valor < 0){
            printf("Número inválido. Digite um número inteiro maior que zero:\n");
            scanf("%d", &valor);
        }
        if ((valor < menor) && (valor != 0)){
            menor = valor;
        }
    }
    printf("O menor número digitado foi %d\n", menor);
    return 0;
}