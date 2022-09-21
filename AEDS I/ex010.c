#include <stdio.h>
#include <math.h>

int main(void){
    int x1, x2, y1, y2, distancia;
    printf("Voce digitara as coordenadas de dois pontos para calcular sua distancia.\n");
    printf("Digite o x1\n");
    scanf("%d",&x1);
    printf("Digite o y1\n");
    scanf("%d",&y1);
    printf("As coordenadas desse ponto sao: (%d, %d)\n", x1, y1);
    printf("Digite o x2\n");
    scanf("%d",&x2);
    printf("Digite o y2\n");
    scanf("%d",&y2);
    printf("As coordenadas desse ponto sao: (%d, %d)\n", x2, y2);
    distancia = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("A distância entre os dois pontos e: %d", distancia);
    return 0;
}