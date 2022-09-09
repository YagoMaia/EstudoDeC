#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#define Class struct


Class Person{
    char name[10];
    uint8_t age;
    uint8_t heigth;
    void(*show)(Class Person);
};

void person_print(Class Person *self){
    printf("Person: %s %d %d\n", self->name, self->age, self->heigth);
}

Class Person * newPerson(char name[],
uint8_t age,
uint8_t heigth){
    Class Person *self = (Class Person *) malloc(sizeoff(Class Person));
    strcpy(self->name, "Yago");
    self->age = 18;
    self->age = 179;

    self->show = &person_print;
    return self;
}



void main(){
    Class Person *person2 = (Class Person *) newPerson("Yago", 18, 179);

    person2->show(person2);   
    
    return;
}