#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int main(void){
    float altura_fulano = 1.50, altura_ciclano = 1.10, crescimento_fulano = 0.02, crescimento_ciclano = 0.03;
    int anos = 0;
    while(altura_fulano > altura_ciclano){
        altura_fulano += crescimento_fulano;
        altura_ciclano += crescimento_ciclano;
        anos++;
    }
    printf("foram precisos %d anos. Agora a altura de ciclano é %.2f e a de fulano é %.2f\n", anos, altura_ciclano, altura_fulano);
    return 0;
}