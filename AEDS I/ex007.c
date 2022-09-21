int main(void)
{
    float altura, peso_ideal;
    printf("Digite o valor da altura\n");
    scanf("%f", &altura);
    peso_ideal = 62.1 * altura - 44.7;
    printf("O peso ideal dessa pessoa e: %f", peso_ideal);
    return 0;
}