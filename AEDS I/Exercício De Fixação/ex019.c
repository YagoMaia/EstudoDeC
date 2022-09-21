#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, N;
    printf("Digite um numero para ver sua tabuada\n");
    scanf("%d", &N);
    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }
    return 0;
}