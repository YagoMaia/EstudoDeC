#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

struct Person{
    char name[10];
    uint8_t age;
    uint8_t heigth;
};

void main(){
    struct Person person;
    strcpy(person.name, "Yago"); // Diferente dos demais, não usar o recebe(=)
    person.age = 18;
    person.heigth = 179;

    printf("%x\n", &person);
    return;
}