#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int valor, menor, count = 1;
    printf("Digite números para analisar qual foi o menor número digitado:\nDigite 0 para finalizar o programa.\n");
    while (valor != 0)
    {
        
        printf("Digite um número inteiro maior que zero:\n");
        scanf("%d", &valor);

        if ((count == 1) && (valor > 0))
        {
            menor = valor;
            count++;
        }
        else
        {
            if (valor == 0)
            {
                break;
            }
            else{
                if (valor < 0){
                    printf("Valor invalido\n");
                }
                else{
                    if (valor < menor){
                        menor = valor;
                    }
                }
            }
        }
    }
    printf("O menor número digitado foi %d\n", menor);
    return 0;
}