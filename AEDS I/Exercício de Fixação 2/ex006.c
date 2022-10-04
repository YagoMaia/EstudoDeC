#include <stdio.h>

int main(void)
{
    int sexo, cabelo, olhos, homens, mulheres, olho_azul, olho_verde, olho_castanho, idade, soma, count_pessoas, cabelo_louro, cabelo_castanho, cabelo_preto, letra_c;
    homens = mulheres = olho_azul = olho_verde = olho_castanho = count_pessoas = cabelo_louro = cabelo_castanho = cabelo_preto = letra_c = soma = 0;
    while (idade != -1){
        printf("Digite sua idade:\n");
        scanf("%d", &idade);
        if (idade == -1){
            break;
        }
        else{
            soma += idade;
            count_pessoas++;
            printf("Qual seu sexo? 0 - Masculino| 1 - Feminino\n");
            scanf("%d", &sexo);
            if (sexo == 0){
                homens++;
            }
            else{
                if (sexo == 1){
                    mulheres++;
                }
                else{
                    printf("Opção inválida");
                }
            }
            printf("Qual a cor do seu cabelo? 0 - louro| 1 - Castanho| 2 - Preto\n");
            scanf("%d", &cabelo);
            if (cabelo == 0)
            {
                cabelo_louro++;
            }
            else
            {
                if (cabelo == 1)
                {
                    cabelo_castanho++;
                }
                else{
                    if (cabelo == 2){
                        cabelo_preto++;
                    }
                    else{
                    printf("Opção inválida");
                    }
                }
            }
            printf("Qual a cor dos seus olhos? 0 - Azul| 1 - Castanho| 2 - Verde\n");
            scanf("%d", &olhos);
            if (olhos == 0)
            {
                olho_azul++;
            }
            else
            {
                if (olhos == 1)
                {
                    olho_castanho++;
                }
                else
                {
                    if (olhos == 2)
                    {
                        olho_verde++;
                    }
                    else
                    {
                        printf("Opção inválida");
                    }
                }
            }
        }
        if((idade > 18) && (idade < 35) && (sexo == 1) && (olhos == 2) && (cabelo == 0)){
            letra_c++;
        }
    }
    if(count_pessoas != 0){
        if(homens > mulheres){
            printf("Há mais homens que mulheres\n");
        }
        else{
            if(homens < mulheres){
                printf("Há mais mulheres que homens\n");
            }
            else{
                printf("Há a mesma quantidade de homens e mulheres\n");
            }
        }
        printf("A média das idades é %d\n", soma/count_pessoas);
        printf("A quantidade de pessoas que são mulheres, entre 18 e 35 anos, louras e com olhos verdes é: %d\n", letra_c);
        }
    else{
        printf("Não há individuos cadastrados");
    }
    return 0;
}