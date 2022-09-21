#include <stdio.h>

int main(void)
{
    float altura, peso_ideal;
    printf("Digite o valor da altura\n");
    scanf("%f", &altura);
    peso_ideal = 72.7 * altura - 58;
    printf("O peso ideal dessa pessoa é: %.2f\n", peso_ideal);
    return 0;
}