#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num;
    printf("Digite um numero para analise\n");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("A raiz quadrada desse numero, %d, e: %.2f", num, sqrt(num));
    }
    else
    {
        printf("Esse numero, %d, ao quadrado e : %.2f", num, pow(num, 2));
    }
}