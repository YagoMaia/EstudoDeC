#include <stdio.h>
#include <string.h>
#define TAM 10

int main(void)
{
    int numeros[TAM];
    int i, guardar, contador;
    printf("Digite 10 valores para serem ordenados\n");
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("Números digitados\n");
    for (i = 0; i < TAM - 1; i++)
    {
        printf("%d,", numeros[i]);
    }
    printf("\n");
    // Problema tá aqu

    for (contador = 1; contador < TAM; contador++)
    {
        for (i = 0; i < TAM; i++)
        {
            if (numeros[i] > numeros[i + 1])
            {
                printf("O numero %d e maior que %d\n", numeros[i], numeros[i + 1]);
                printf("Guardando o numero %d\n", numeros[i]);
                guardar = numeros[i];
                printf("Numero na posicao %d vai receber o numero na posicao %d\n", i, i + 1);
                numeros[i] = numeros[i + 1];
                printf("Numero na posicao %d vai receber o numero guardado, %d\n", i + 1, guardar);
                numeros[i + 1] = guardar;
            }
        }
        printf("\nExecutando o programa pela %d vez", contador);
    }
    printf("\nNúmeros Ordenados\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d,", numeros[i]);
    }
}