#include <stdio.h>
#include <stdlib.h>




struct Student
{
   char name[50];
   int class;

   struct Address
   {
       char city[50];
       int pincode;
   }addr;



} student = {"Antonis", 5, "Athens", 15231};


struct Subject
{
   char name[50];
   char book[50];
};


struct Teacher
{
   char name[50];


   struct Subject subject;
};







int main()
{


   struct Teacher teacher;

   printf("Dvse onoma daskalou:");
   scanf("%s",teacher.name);
   printf("Dose onoma mathimatos:");
   scanf("%s",teacher.subject.name);
   printf("Dose biblio mathimatos:");
   scanf("%s",teacher.subject.book);

    printf("******************************************\n");

    printf("Name : %s\nBook name: %s\n",teacher.name,teacher.subject.book);

    printf("Name : %s\nStudent City: %s",student.name,student.addr.city);

    printf("Name : %s\nStudent PinCode: %s",student.name,student.addr.pincode);


    return 0;
}
