#include <stdio.h>
#include <stdlib.h>

void insert (){
    double A[2][2];

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){

            printf("Grammi: %d \n",i+1);
            printf("Stili: %d \n",j+1);

            printf("Dose stoixio ston pinaka : \n");
            scanf("%lf",&A[i][j]);
            printf("************************************\n");
        }
    }

}

void mesos_oros(){
    double A[2][2];

    double mo;

    double sum=0;

    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum=sum+A[i][j];
        }
    }
    mo=sum/4;
    printf("O mesos oros einai : %lf\n",mo);
    printf("******************************\n");

}

void mesos_oros_grammis(){
    double A[2][2];

    double mog;

    double sum;

    for (int i=0; i<2; i++){

            sum=0;

        for (int j=0; j<2; j++){

            sum=sum+A[i][j];

        }

          mog=sum/2;

          printf("Grammi : %d \n", i+1);
          printf("O mesos oros einai : %lf\n",mog);
          printf("************************************\n");


    }


}
void maximum (){
    double A[2][2];

    double max=-999999999999999999999;

    for(int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            if (A[i][j]>=max){
                max=A[i][j];
            }
        }
    }
    printf("O megistos oros einai : %lf \n",max);
    printf("**********************************\n");

}

void menu (){
    insert ();
    printf("**********************************\n");
    printf("**********************************\n");
    mesos_oros();
    printf("**********************************\n");
    printf("**********************************\n");
    mesos_oros_grammis();
    printf("**********************************\n");
    printf("**********************************\n");
   // maximum ();
}


int main()
{

    menu();

    return 0;
}
