#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct student
{
    char name[40];
    int  age;
    unsigned long long mobile;
};




int main()
{
   struct student student1; //simple object

   struct student *student2; // pointer of object


    student2 = (struct student*) malloc(sizeof(struct student));

    printf("Enter student name: ");
    fgets(student1.name, 40, stdin);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Enter student mobile: ");
    scanf("%llu", &student1.mobile);

    getchar();

    printf("\nStudent using simple structure variable.\n");
    printf("Student name: %s\n",         student1.name);
    printf("Student age: %d\n",          student1.age);
    printf("Student mobile: %llu\n",   student1.mobile);


    printf("Enter student name: ");
    fgets(student2->name, 40, stdin);

    printf("Enter student age: ");
    scanf("%d", &student2->age);

    printf("Enter student mobile: ");
    scanf("%llu", &student2->mobile);


	printf("Student using pointer to structure variable.\n");
    printf("Student name: %s\n",        student2->name);
    printf("Student age: %d\n",         student2->age);
    printf("Student mobile: %llu\n",    student2->mobile);

    free(student2);

    return 0;
}
