#include <stdio.h>
#include <string.h>

int main(void){
    printf("Sera feito algumas perguntas para descobrir qual animal sera retornado.\n");
    //Depois tentar usar como char pra analisar se foi sim ou não a resposta digitada. Também fazer caso não esteja entre sim e não tornar perguntar com o while.
    // %c → Que armazena a string/caracter
    //PORQUE eu usei mais uma variavel pra isso????
    int opcao;

    printf("Digite 1 caso seja sim e 0 caso seja nao\n");
    printf("O animal e mamifero?\n");
    scanf("%d", &opcao);
    if (opcao == 1){
        printf("O animal e quadrupede?\n");
        scanf("%d", &opcao);
        if (opcao == 1){
            printf("O animal e carnivoro?\n");
            scanf("%d", &opcao);
            if (opcao == 1){
                printf("O animal e o Leao");
            }
            else{
                printf("O animal e o cavalo");
            }
        }
        else{
            printf("Animal nao cadastrado");
        }
    }
    else{
        printf("O animal e uma ave?.\n");
        scanf("%d",&opcao);
        if (opcao == 1){
            printf("O animal não voa?.\n");
            scanf("%d",&opcao);
            if (opcao == 1){
                printf("O animal é tropical?\n");
                scanf("%d",&opcao);
                if (opcao == 1){
                    printf("O animal é o Avestruz");
                }
                else{
                    printf("O animal é o pinguin");
                }
            }
            else{
                printf("O animal é nadador?\n");
                scanf("%d", &opcao);
                if (opcao == 1){
                    printf("O animal é o pato");
                }
                else{
                    printf("O animal é a Águia");
                }
            }
        }
        else{
            printf("O animal é um reptil\n");
            scanf("%d", &opcao);
            if (opcao == 1){
                printf("O animal tem um casco?\n");
                scanf("%d", &opcao);
                if (opcao == 1){
                    printf("O animal é uma tartaruga\n");
                }
                else{
                    printf("O animal é carnivoro?\n");
                    scanf("%d", &opcao);
                    if (opcao == 1){
                        printf("O animal é um crocodilo");
                    }
                    else{
                        printf("O animal não possui patas?\n");
                        scanf("%d",opcao);
                        if (opcao == 1){
                            printf("O animal é uma cobra");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
