#include <stdio.h>
#include <stdlib.h>

struct Fly {

    int id ;

    int thesis;

    int pas ;

};

struct Fly getInformation (){

    struct Fly f1;

    printf("Dose to id soy :\n");
    scanf("%lf",f1.id);

    printf("Dose tis thseis :\n");
    scanf("%lf",f1.thesis);

    printf("Dose tous epibates :\n");
    scanf("%lf",f1.pas);

    return f1;
}


struct Fly Display (struct Fly f1){

        printf("Displaying information\n");

        printf("ID : \n",f1.id);

        printf("Thesis : \n",f1.thesis);

        printf("Epibates : \n",f1.pas);

}

int main()
{
    struct Fly f;

    f=getInformation();

    Display(f);

    return 0;
}
