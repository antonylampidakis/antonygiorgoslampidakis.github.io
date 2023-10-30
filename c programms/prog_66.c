#include <stdio.h>
#include <stdlib.h>
struct Foitis {

    char name [50];

    char sname [50];

    char sxoli [60];

    char dep [60];

    int aem;

    int etos_eisagos ;

};

void print (  struct Foitis f){

    printf("Onoma: %s\n",f.name);
    printf("eponimo: %s\n",f.sname);
    printf("sxloi: %s\n",f.sxoli);
    printf("Tmima: %s\n",f.dep);
    printf("Etos eisagogis : %d\n",f.etos_eisagos);
    printf("Arithmos mitroy : %d\n",f.aem);

}

int main()
{

    struct Foitis f1;


    strcpy( f1.name, "Antony");

    strcpy( f1.sname, "lampidakis");

    strcpy( f1.sxoli, "pliroforikis kai tilepikinonion");

    strcpy( f1.dep, "ekpa");

    f1.etos_eisagos  = 2022;

    f1.aem = 999952200088;


    print( f1 );


    return 0;
}
