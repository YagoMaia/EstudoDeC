#include <stdio.h>

int main(void){
    printf("Sera feito algumas perguntas para descobrir qual animal sera retornado.\n");
    char mamifero[3], aves[3], repteis[3], quadrupedes[3], bipedes[3], voadores[3], aquaticos[3], carnivoro[3], herbivoro[3], onivoro[3], frutivoro[3];
    printf("Digite 1 caso seja sim e 0 caso seja nao\n");
    printf("O animal e mamifero?\n");
    scanf("%3s", mamifero);
    printf("Resposta dada: %3s\n", mamifero);
    if (mamifero == "sim"){
        printf("E mamifero.\n");
        printf("O animal e quadrupede?\n");
        scanf("%3s", quadrupedes);
        if (printf("%3s", quadrupedes == "sim")){
            printf("E quadrupede.\n");
            printf("O animal e carnivoro?\n");
            scanf("%3s", carnivoro);
            if (printf("%3s", carnivoro == "sim")){
                printf("O animal e o Leao");
            }
            else{
                printf("O animal e o cavalo");
            }
        }
    }
    else{
        printf("Nao e mamifero.\n");
    }
    return 0;
}