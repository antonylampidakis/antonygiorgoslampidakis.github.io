#include <stdio.h>
#include <stdlib.h>

struct Programmer {

    char name [20];

    char sname [30];

    char spec[30];

    char br[30];

    int id;

};


struct Programmer getInformation (){

    struct Programmer p1 ;

    printf("Enter your name :\n");
    scanf("%s",p1.name);

    printf("Enter your sname : \n");
    scanf("%s",p1.sname);

    printf("Enter your spec :\n");
    scanf("%s",p1.spec);

    printf("Enter your br :\n");
    scanf("%s",p1.br);

    printf("Enter your id :\n");
    scanf("%lf",p1.id);


    return p1;
};

struct Programmer Display(struct Programmer p1){



    printf("Displaying information\n");
    printf("Name %s\n",p1.name);
    printf("Sname %s\n",p1.sname);
    printf("Spec %s\n",p1.spec);
    printf("Br %s\n",p1.br);
    printf("ID %lf\n",p1.id);


};






int main()
{
   struct Programmer p;

   p=getInformation ();

   Display(p);

    return 0;
}
