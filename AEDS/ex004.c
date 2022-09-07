#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, soma, media;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &num3);
    printf("Digite o quarto numero:\n");
    scanf("%d", &num4);
    printf("Digite o quinto numero:\n");
    scanf("%d", &num5);
    soma = num1 + num2 + num3 + num4 + num5;
    media = soma / 5;
    printf("A media aritimetica e: %d", media);
    return 0;
}