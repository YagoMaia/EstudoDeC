#include <stdio.h>

int main(void)
{
    float temp_f, temp_c;
    printf("Digite o valor de graus em Fahrenheit\n");
    scanf("%f", &temp_f);
    temp_c = 5 * (temp_f - 32) / 9;
    printf("A temperatura em graus Celcius é: %.2f\n", temp_c);
    return 0;
}
