#include <stdio.h>

int main(void)
{
    int x;
    printf("Digite o valor de um numero:\n");
    scanf("%d", &x); /*É necessário usar o & pra armazenar valores*/
    x = x * 2;
    printf("O dobro do numero digitado e: %d", x);
    return 0;
}
