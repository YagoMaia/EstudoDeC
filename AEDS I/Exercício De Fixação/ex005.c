#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int hn, he, valor_hn, valor_he, total;
    printf("Será perguntado quantas horas normais e extras foram trabalhadas nesse ano para calcular seu salário anual\n");
    printf("Quantas horas normais foram trabalhadas?\n");
    scanf("%d",&hn);
    printf("E quantas horas extras?\n");
    scanf("%d",&he);
    while ((hn == 0) || (he == 0)){
        printf("Valor inconsistênte, por favor digite o valor correto.\n");
        if (hn == 0){
            printf("Quantas horas normais foram trabalhadas?\n");
            scanf("%d", &hn);
        }
        else{
            printf("E quantas horas extras?\n");
            scanf("%d", &he);
        }
    }
    valor_hn = hn * 10;
    valor_he = he * 15;
    total = valor_hn + valor_he;
    printf("O seu salário anul é: %d\n", total);
    return 0;
}