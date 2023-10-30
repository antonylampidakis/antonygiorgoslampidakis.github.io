#include <stdio.h>
#include <stdlib.h>

struct Prog {
    char name[250] ;
    int id;
    char email[250];
    int age;

};

int main()
{
    struct Prog pr1;

    strcpy(pr1.name, "Antonis");
    pr1.id=1222;
    strcpy(pr1.email, "antonylampidakis@gmail.com");
    pr1.age=18;

    printf("My name : %s \n",pr1.name);
    printf("My id : %d\n",pr1.id);
    printf("My email : %s \n",pr1.email);
    printf("My age : %d\n",pr1.age);

    return 0;
}
