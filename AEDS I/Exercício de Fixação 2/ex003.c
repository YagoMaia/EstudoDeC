#include <string.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    float x, valor, soma = 0;
    printf("Digite um valor para ser Cálculado na seguinte expressao:\n");
    for (i = 1; i <= 15; i++)
    {
        if (i == 15)
        {
            printf("X^%d/%d\n", i, i * i);
        }
        else
        {
            printf("X^%d/%d + ", i, i * i);
        }
    }
    scanf("%f", &x);
    printf("A expressao fica dessa maneira:\n");
    for (i = 1; i <= 15; i++)
    {
        valor = pow(x, i) / pow(i, 2);
        printf("i = %d; valor = %f\n", i, valor);
        soma += valor;
        printf("soma = %.2f\n", soma);
    }
    printf("O resultado dessa equacao e: %.2f\n", soma);
    return 0;
}