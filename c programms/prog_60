#include <stdio.h>
#include <stdlib.h>

void insert (){
    int A[10];

    for (int i=0; i<10; i++){
        printf("Dose stoixia ston pinaka : \n");
        scanf("%d",&A[i]);
    }
}

void mesos_oros (){
    int A[10];
    double mo=0;
    double sum=0;

    for (int i=0; i<10; i++){
        sum=sum+A[i];
    }
    mo=sum/10;
    printf ("O mesos oros einai : %lf \n",mo);
    printf ("*******************************\n");

}

void megistos (){
    int A[10];
    double max=-999999999999999;

    for(int i=0; i<10; i++){

        if (A[i]>=max){
            max=A[i];
        }
    }

    printf("O megistos oros einai : %lf \n",max);
    printf("**************************************\n");

}

void elaxistos (){
    int A[10];
    double min=999999999999999999;

    for (int i=0; i<10; i++){

        if (A[i]<=min){
            min=A[i];
        }
    }

    printf("O mikroteros oros einai : %lf \n",min);
    printf("********************************************\n");

}

void menu (){

    insert ();
    mesos_oros ();
    megistos ();
    elaxistos ();

}



int main()
{
    menu();
    return 0;
}
