

#include <stdio.h>

struct student
{
    char name[50];
    int age;
};


struct student getInformation()
{
  struct student s1;

  printf("Enter name: ");
  scanf ("%s", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);

  return s1;
}



int main()
{
    struct student s;

    s = getInformation();

    printf("Displaying information\n");
    printf("Name: %s \n", s.name);
    printf("Age: %d \n", s.age);

    return 0;
}

