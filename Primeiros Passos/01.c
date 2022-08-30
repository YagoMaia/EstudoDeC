#include<stdio.h>
#include<stdlib.h>
#define Cubo(x) ((x)*(x)*(x))

int main(void)
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("Media do aluno = %.1f\n", media);
    printf("O cubo da media = %.1f\n", Cubo(media));
    system("pause");

    return 0;
}