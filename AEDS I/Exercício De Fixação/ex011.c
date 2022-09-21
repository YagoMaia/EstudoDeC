#include <stdio.h>
#include <stdlib.h>

int main(void){

    int nota1, nota2;
    printf("Será pedido a nota de duas provas, valores que variam de 0 a 10, para calcular a média\n");
    printf("Digite o valor da primeira nota:\n");
    scanf("%d",&nota1);
    while (nota1 < 0 || nota1 > 10){
        printf("Nota inválida, por favor digite um valor de 0 a 10\n");
        scanf("%d", &nota1);
    }
    printf("Digite o valor da segunda nota:\n");
    scanf("%d",&nota2);
    while (nota2 < 0 || nota2 > 10){
        printf("Nota inválida, por favor digite um valor de 0 a 10\n");
        scanf("%d", &nota2);
    }
    printf("A média desse aluno é: %d\n",(nota1+nota2)/2);
    return 0;
}
