#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num, i, soma=0, valor;
    printf("Digite um número para calcular seu fatorial:\n");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        if (i == num)
        {
            printf("%d! = %dx", num, i);
        }
        else
        {
            if (i == 1)
            {
                printf("%d", i);
            }
            else
            {
                printf("%dx", i);
            }
        }
    }
    printf("\n");
    i = 1;
    valor = num;
    while (num - i > 0){
        soma = valor * (num-i);
        valor = valor * (num - i);
        i++;
    }
    printf("%d! = %d", num, soma);
    return 0;
}