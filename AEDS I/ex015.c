#include <stdio.h>

int main(void)
{
    int number;
    printf("Digite o numero para analisar se esta entre 0 e 9\n");
    scanf("%d", &number);
    if ((number >= 0) && (number <= 9))
    {
        printf("O numero digitado esta entre 0 e 9");
    }
    else
    {
        if (number < 0)
        {
            printf("O numero digitado e menor que 0");
        }
        else
        {
            printf("O numero digitado e maior que 9");
        }
    }
    return 0;
}