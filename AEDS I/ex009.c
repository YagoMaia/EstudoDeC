#include <stdio.h>

int main(void)
{
    int a, b, c, delta, x1, x2;
    printf("Digite os valores dos coeficientes da equação do segundo grau\n");
    printf("a vai receber:\n");
    scanf("%d", &a);
    if (a != 0){
        printf("b vai receber:\n");
        scanf("%d", &b);
        printf("c vai receber:\n");
        scanf("%d", &c);
        printf("A equacao do segundo grau sera: %dx^2 + %dx + %d\n", a, b, c);
        delta = b * b - 4 * a * c;
        if (delta < 0){
            printf("Nao existem raizes reais para essa equacao\n");
        }
        else{
            if (delta == 0){
                printf("As duas raizes sao iguais\n");
                x1 = x2 = (-b + (delta)*1 / 2) / 2 * a;
                printf("A raiz é: %d", x1);
            }
            else{
                printf("As duas raizes sao diferentes\n");
                x1 = (-b + (delta)*1 / 2) / 2 * a;
                x2 = (-b - (delta)*1 / 2) / 2 * a;
                printf("As raizes sao %d e %d\n", x1, x2);
            }
        }
    }
    else{
        printf("Isso nao é considerado uma equacao do segundo grau\n");
    }
    return 0;
}
