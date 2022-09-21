#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");
    int consumo;
    float gasolina=6.13;
    printf("Quanto é o consumo mensal de combustível?\n");
    scanf("%d", &consumo);
    if (consumo >= 50000){
        printf("O valor gasto seria de %.1f, se não houvesse o aumento da gasolina\n", consumo*gasolina);
        printf("Com o aumento da gasolina, o valor foi de %.1f", (consumo*(1.2*gasolina)));
    }
    else{
        printf("O valor gasto seria de %.1f, se não houvesse o aumento da gasolina\n", consumo * gasolina);
        printf("Com o aumento da gasolina, o valor foi de %.1f", (consumo * (1.12 * gasolina)));
    }
    return 0;
}