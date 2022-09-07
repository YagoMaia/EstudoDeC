#include <stdio.h>
#include <string.h>

int main(void){
    printf("Sera feito algumas perguntas para descobrir qual animal sera retornado.\n");
    int mamifero, aves, repteis, quadrupedes, bipedes, voadores, aquaticos, tropicais, nadador, carnivoro, casco, sem_patas, herbivoro, onivoro, frutivoro;
    
    printf("Digite 1 caso seja sim e 0 caso seja nao\n");
    printf("O animal e mamifero?\n");
    scanf("%d", &mamifero);
    if (mamifero == 1){
        printf("O animal e quadrupede?\n");
        scanf("%d", &quadrupedes);
        if (quadrupedes == 1){
            printf("O animal e carnivoro?\n");
            scanf("%d", &carnivoro);
            if (carnivoro == 1){
                printf("O animal e o Leao");
            }
            else{
                printf("O animal e o cavalo");
            }
        }
    }
    else{
        printf("O animal e uma ave?.\n");
        scanf("%d",&aves);
        if (aves == 1){
            printf("O animal não voa?.\n");
            scanf("%d",&voadores);
            if (voadores == 1){
                printf("O animal é tropical?\n");
                scanf("%d",&tropicais);
                if (tropicais == 1){
                    printf("O animal é o Avestruz");
                }
                else{
                    printf("O animal é o pinguin");
                }
            }
            else{
                printf("O animal é nadador?\n");
                scanf("%d", &nadador);
                if (nadador == 1){
                    printf("O animal é o pato");
                }
                else{
                    printf("O animal é a Águia");
                }
            }
        }
        else{
            printf("O animal é um reptil\n");
            scanf("%d", &repteis);
            if (repteis == 1){
                printf("O animal tem um casco?\n");
                scanf("%d", &casco);
                if (casco == 1){
                    printf("O animal é uma tartaruga\n");
                }
                else{
                    printf("O animal é carnivoro?\n");
                    scanf("%d", &carnivoro);
                    if (carnivoro == 1){
                        printf("O animal é um crocodilo");
                    }
                    else{
                        printf("O animal não possui patas?\n");
                        scanf("%d",sem_patas);
                        if (sem_patas == 1){
                            printf("O animal é uma cobra");
                        }
                    }
                }
            }
        }
    }
    return 0;
}