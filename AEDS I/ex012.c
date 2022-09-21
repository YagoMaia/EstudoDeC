#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    printf("Algoritimo para analisar um triângulo.\n");
    printf("Digite o valor do primeiro lado.\n");
    scanf("%d",&a);
    printf("Digite o valor do segundo lado.\n");
    scanf("%d", &b);
    printf("Digite o valor do terceiro lado.\n");
    scanf("%d", &c);
    if ((a < b +c) && (b < a + c) && (c < a + b)){
        printf("E possivel formar um triangulo.\n");
        if ((a == b) && (a == c)){
            printf("Esse e um triangulo equilatero");
        }
        else{
            if((a == b) || (a == c) || (b == c)){
                printf("Esse e um triangulo isoceles");
            }
            else{
                printf("Esse e um triangulo escaleno");
            }
        }
    }
    else{
        printf("Nao e possivel formar um triangulo. \n");
    }
    return 0;
}