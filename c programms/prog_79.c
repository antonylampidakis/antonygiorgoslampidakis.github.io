#include <stdio.h>
#include <stdlib.h>

struct person
{
   int age;

   float weight;

};

struct Programer{

    char name [20];

    char sname [30];

    char spec[30];

    char br[30];

    int id;

};

int main()
{
    struct person *pPtr, p1;

    struct Programer * pProg , pr1;

    pPtr = &p1;

    pProg =&pr1;

    printf("Enter age: ");
    scanf("%d", &pPtr->age);

    printf("Enter weight: ");
    scanf("%f", &pPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", pPtr->age);
    printf("weight: %f \n", pPtr->weight);


    printf("*****************************\n");

    printf("Enter your name : \n");
    scanf("%lf",pProg->name);

    printf("Enter your sname : \n");
    scanf("%lf",pProg->sname);

    printf("Enter your spec : \n");
    scanf("%lf",pProg->spec);

    printf("Enter your br : \n");
    scanf ("%lf",pProg->br);

    printf("Enter your id :\n");
    scanf("%d", pProg->id);


    return 0;
}
