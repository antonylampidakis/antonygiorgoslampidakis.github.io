#include <stdio.h>
#include <string.h>


struct Person {
  char name[50];
  int tk;
  int  id;

} person1;

void print (struct Person person1){

    printf("Name: %s\n",person1.name);
    printf("Post Number: %d\n",person1.tk);
    printf("Id %d \n",person1.id);

}

int main() {


  strcpy(person1.name, "Antony Lampidakis");


  person1.tk = 15231;
  person1.id = 1222;

  print(person1);

  //printf("Name: %s\n", person1.name);
  //printf("Post Number: %d\n", person1.tk);
  //printf("Id: %d \n", person1.id);

  return 0;
}
