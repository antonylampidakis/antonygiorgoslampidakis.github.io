/*
    struct Product

            id
            name
            desc

    struct Solution

            id
            name
            desc
            iso

    union Software

            struct Product
            struct Solution

            teamid
            sector


*/
#include <stdio.h>
#include <stdlib.h>

struct Product {

    int id ;
    char name [40];
    char desc [40];

};

struct Solution {

    int id ;
    char name [40];
    char desc [40];
    int iso;

};


union Software {

    struct Product pr;
    struct Solution so;

    int teamid ;
    int sector ;


};


int main()
{

    union Software nn;

    printf(" size of Software variable = %d\n\n", sizeof(nn));

    printf("Enter  id: \n");
    scanf("%d", &nn.pr.id);

    printf("Enter name : \n");
    scanf("%s", &nn.pr.name);

    printf("Enter desc : \n");
    scanf("%s", &nn.pr.desc);


    printf("******************************\n");

    printf("Enter  id: \n");
    scanf("%d", &nn.so.id);

    printf("Enter name : \n");
    scanf("%s", &nn.so.name);

    printf("Enter desc : \n");
    scanf("%s", &nn.so.desc);

    printf("Enter iso : \n");
    scanf("%d", &nn.so.iso);

    printf("******************************\n");

    printf("Enter team id : \n");
    scanf("%d", &nn.teamid);

    printf("Enter sector : \n");
    scanf("%d", &nn.sector);

    printf("******************************\n");

    printf(" %d %s %s %d %s %s %d %d %d \n\n ",
           nn.pr.id, "\n",
           nn.pr.name, "\n",
           nn.pr.desc, "\n",
           nn.so.id, "\n",
           nn.so.name ,"\n",
           nn.so.desc, "\n",
           nn.so.iso, "\n",
           nn.teamid ,"\n",
           nn.sector
           );






    return 0;
}
