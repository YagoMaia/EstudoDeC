#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

struct Person
{
    char name[10];
    uint8_t age;
    uint8_t heigth;
};

void createPerson(char name[],
                  uint8_t age,
                  uint8_t heigth,
                  void(*function_pointer(struct Person)))
{
    struct Person person;
    strcpy(person.name, "Yago"); // Diferente dos demais, não usar o recebe(=)
    person.age = 18;
    person.heigth = 179;

    (*function_pointer)(person);
}

void printPerson(struct Person person)
{
    printf("Person: %s %d %d\n", person.name, person.age, person.heigth);
}

void printPerson2(struct Person person)
{
    printf("Name:%s Age:%d Heigth:%d\n", person.name, person.age, person.heigth);
}
void main()
{

    createPerson("Yago", 18, 179, &printPerson); // Pergando como referênia o printPerson e passando como argumento para o createPerson
    createPerson("Yago", 18, 179, &printPerson2);
    return;
}

//Callback funções que recebem outras funções como argumento