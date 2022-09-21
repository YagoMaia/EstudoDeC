#include <stdio.h>
#include <string.h>
#define TAM 10

int main(void)
{
    int numeros[TAM];
    int i, aux, count;
    printf("Será pedido que escreva 10 números para colocar eles em ordem crescente\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &numeros[i]);
    }
    printf("Lista desordenada\n");
    for (i = 0; i < 10; i++){
        if (i == 0)
        {
            printf("[");
        }
        printf("%d,", numeros[i]);
        if (i == 9)
        {
            printf("]\n");
        }
    }
    //Preciso de dois for agora
    for (count = 1; count < TAM; count++){
        for (i = 0; i < TAM - 1; i++){
            if (numeros[i] > numeros[i+1]){
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
    printf("Lista ordenada de maneira crescente\n");
    for (i = 0; i < 10; i++)
    {
        if (i == 0){
            printf("[");
        }
        printf("%d,", numeros[i]);
        if (i == 9){
            printf("]\n");
        }
    }
    return 0;
}