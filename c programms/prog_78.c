#include <stdio.h>
#include <stdlib.h>



struct Programmer {

    char name [20];

    char sname [30];

    char spec[30];

    char br[30];

    int id;


    struct DataIntel{

        char scope [30];

        char tool [20];

    };

};

void printData(struct Programmer *p){

    printf("Programmer name : %s\n",p->name);
    printf("Programmer sname : %s\n",p->sname);
    printf("Programmer spec : %s\n",p->spec);
    printf("Programmer br : %s\n",p->br);
    printf("Programmer id : %d\n",p->id);


}

void printData2(struct DataIntel *di){

    printf("Data analyzer scope : %s\n", di->scope);
    printf("Data analyzer tool : %s\n",di->tool);

}

void printData3(struct Programmer *p){

    printf("Programmer name : %s\n",p->name);
    printf("Programmer sname : %s\n",p->sname);
    printf("Programmer spec : %s\n",p->spec);
    printf("Programmer br : %s\n",p->br);
    printf("Programmer id : %d\n",p->id);

    printf("Scope :: %s\n", p->scope);
    printf("Tool :: %s\n", p->tool);

}


int main()
{
    struct Programmer p1;
    struct Programmer p2;

    struct Programmer p3;
    struct DataIntel d1;

    strcpy(p1.name,"Antony");
    strcpy(p1.sname,"Lampidakis");
    strcpy(p1.spec,"foititis");
    strcpy(p1.br,"pliroforikis");
    p1.id=88;


    strcpy(p2.name,"Giannis");
    strcpy(p2.sname,"Papadopoylos");
    strcpy(p2.spec,"foitis");
    strcpy(p2.br,"iatrikis");
    p2.id=120;


    strcpy(p3.name,"Nikos");
    strcpy(p3.sname,"fotinos");
    strcpy(p3.spec,"foitis");
    strcpy(p3.br,"pliroforikis");
    p3.id=110;

    strcpy(d1.scope,"AI");
    strcpy(d1.tool,"BI");

    printf("*********************************\n");

    printData(&p1);

    printf("*********************************\n");

    printData(&p2);

    printf("*********************************\n");

    printData (&p3);

    printf("**********************************\n");

    printData2(&d1);

    printf("**********************************\n");

    printData3 (&p3);

    return 0;
}
