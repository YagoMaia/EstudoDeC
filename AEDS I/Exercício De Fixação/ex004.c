#include <stdio.h>
#include <locale.h>

 int main(void)
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um número entre 100 e 999\n");
    scanf("%d", &num);
 while ((100 > num) || (num > 999))
{
     printf("Número inválido, por favor digite um numero entre 100 e 999\n");
     scanf("%d", &num);
 }
    //multiplicacao  é dividendo * quociente + resto = resultado
    return 0;
}
