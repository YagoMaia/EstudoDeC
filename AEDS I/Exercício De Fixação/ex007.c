#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int hn, he, valor_hn, valor_he, total, imposto, resp = 1;
    while (resp == 1){
        printf("Será perguntado quantas horas normais e extras foram trabalhadas nesse ano para calcular seu salário anual\n");
        printf("Quantas horas normais foram trabalhadas?\n");
        scanf("%d", &hn);
        printf("E quantas horas extras?\n");
        scanf("%d", &he);
        valor_hn = hn * 10;
        valor_he = he * 15;
        total = valor_hn + valor_he;
        printf("O seu salário anual é: %d\n", total);
        if (total <= 12000)
        {
            printf("O seu salário anual é %d, sendo menor ou igual que 12000, então pagará um imposto de 10 por cento sobre ele\n", total);
            imposto = total * (10 / 100); //Pq que não tá indo????????
            printf("%d", imposto);
            printf("O imposto ficou no valor de %d\n", imposto);
        }
        else
        {
            printf("O seu salário ultrapassou o valor de 12000, então pagará um imposto de 10 por centoobre 12000 mais 25 por cento sobre o execente\n");
            imposto = (total * (10 / 100)) + ((12000 - total) * (25 / 100));
            printf("O imposto ficou no valor de %d\n", imposto);
        }
        printf("Deseja realizar um novo cálculo? [0 -- Não][1 -- Sim]\n");
        scanf("%d", &resp);
        while (resp < 0 || resp > 1){
            printf("Opção inválida, por favor digite 1 ou 0\n");
            scanf("%d", &resp);
        }
    }
    return 0;
}