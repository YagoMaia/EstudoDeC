#include <stdio.h>
#include <math.h>

int main(void){
    int number;
    printf("Algoritimo para analisar de um numero e par ou impar\n");
    scanf("%d",&number);
    if (number%2 == 0){
        printf("Esse e um numero par\n");
    }
    else{
        printf("Esse e um numero impar\n");
    }
    return 0;
}