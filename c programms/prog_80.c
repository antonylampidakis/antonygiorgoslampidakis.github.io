#include <stdio.h>

struct Student {
   char name[50];
   int age;
};

struct Programer {

    char name [20];

    char sname [30];

    char spec[30];

    char br[30];

    int id;

};


void display(struct Student s) {

   printf("Displaying information\n");
   printf("Name: %s", s.name);
   printf("\nAge: %d", s.age);
}

void display2(struct Programer p){

    printf("Dispalying information \n");
    printf("Name: %s",p.name);
    printf("Sname: %s",p.sname);
    printf("Spec: %s",p.spec);
    printf("Br: %s",p.br);
    printf("Id: %lf",p.id);
}

int main() {
   struct Student s1;

   struct Programer p1;

   printf("Enter name: ");
   scanf("%s", s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);

   printf("**************************\n");

   printf("Enter your name : ");
   scanf("%s",p1.name);

   printf("Enter your sname : ");
   scanf("%s",p1.sname);

   printf ("Enter your spec :");
   scanf("%s",p1.spec);

   printf("Enter your br :");
   scanf("%s",p1.br);

   printf("Enter your ID :");
   scanf("%lf",p1.id);

    printf("**************************\n");
   display(s1);
    printf("**************************\n");
   display2(p1);

   return 0;
}
