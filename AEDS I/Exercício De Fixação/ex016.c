#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, i;
    printf("Digite um numero N para escrever todos os números de 1 a ele.\n");
    scanf("%d", &N);
    while (N > 0){
        printf("Valor menor que 0, por favor informe um valor positivo\n");
        scanf("%d", &N);
    }
    printf("Os numeros entre 1 e %d são\n", N);
    for (i = 1; i <= N; i++)
    {
        printf("%d,", i);
    }
    return 0;
}