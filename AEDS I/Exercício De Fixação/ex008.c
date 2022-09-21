#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num1, num2;

    printf("Será pedido dois valores para realizar a divisão entre eles\n");
    printf("Digite o primeiro valor: \n");
    scanf("%d", &num1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &num2);
    while (num2 == 0){
        printf("O divisão não pode ser igual a zero.\nPor favor digite outro valor:\n");
        scanf("%d", &num2);
    }
    printf("A divisão de %d por %d é %d", num1, num2, num1/num2);
    return 0;
}