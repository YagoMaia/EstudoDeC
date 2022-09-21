#include <stdio.h>
#include <math.h>

int main(void)
{
    int valor, resultado;
    printf("Digite um valor para calcular a expressao x + x^2 + x^4\n");
    scanf("%d", &valor);
    resultado = valor + pow(valor, 2) + pow(valor, 4);
    printf("O resultado dessa equacao e: %d\n", resultado);
    return 0;
}