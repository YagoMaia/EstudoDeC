#include <stdio.h>

//Endereços e referências

void f2(char hello[]){
    printf("from f2: %d\n", &hello); // endereço do hello world na terceira chamada
    printf("%s\n", hello); // retona a stirng hello world
}

void f1(char hello[]){
    printf("from f1: %d\n", &hello); // endereço do hello world na segunda chamada
    f2(hello);
}

 void main(){

    char hello[] = "Hello World";
    printf("from main: %d\n", &hello); // endereço do hello world na primeira chamada
    f1(hello);

    return;
 } // Com esse programa criamos 3 varaiveis do hello world na memória com os mesmos valores só que com endereços diferentes --> Isso não é necessarimente ruim