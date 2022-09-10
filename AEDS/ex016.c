#include <stdio.h>

int main(void){
    int distancia, tempo, velocidade;
    printf("Serao pedidos a distancia e o tempo para calcular a velocidade, em metros/segundos\n");
    printf("Digite o valor da distancia\n");
    scanf("%d", &distancia);
    printf("Digite o tempo percorrido\n");
    scanf("%d", &tempo);
    if ((tempo == 0) || (distancia == 0)){
        printf("Não é possível calcular a velocidade\n");
    }
    else{
        velocidade = distancia/tempo;
        printf("A velocidade e %dm/s\n", velocidade);
    }
    return 0;
}