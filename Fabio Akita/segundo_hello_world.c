#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

    char hello[] = "Hello World";
    printf("from main: %d\n", hello);

    //o * indica que é um ponteiro
    //Se colocar o * indica o valor do endereço, se não indicaria apenas o endereço
    char *hello2 = malloc(sizeof(hello)); //ponteiro apontado para o hello world definido mais acima
    strcpy(hello2, hello);
    printf("hello2: %x\n", hello2);

    char *hello3 = hello2 + 6; //ponteiro --> apontando 6 bits mais pra frente, que seria apartir do World
    printf("from hello2: %s\n", hello2);
    printf("from hello3: %s\n", hello3);

    return;

    //hello2 e hello3 fazem referências a mesma string, apenas indicando endereços diferentes
}