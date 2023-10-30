#include <stdio.h>
#include <stdlib.h>


double csms ( int sms){

        double c;

        if ( sms>=1 && sms<=100){ c= sms*0.11; }

        else if (sms>=101 && sms<=200){ c= sms*0.15; }

        else { c= sms*0.17; }

        return c;

}

double cm ( double m){

    double c1;

    if ( m>=1 && m<=100){ c1=m*0.14;}

    else if ( m>=101 && m<=200){ c1=m*0.17;}

    else { c1=m*0.21; }

    return c1;

}

double tc ( double tcsms, double tcm)
{
    double c3;
    double c4;

    c3=tcsms+tcm;

    c4= c3+(c3*0.24);

    return c4;

}


void menu(){

        double m;

        double n1,n2,n3;

        int sms;

        printf("Dose ta sms poy katanaloses : \n");
        scanf("%d",&sms );

        printf("Dose ta lepta poy katanaloses : \n");
        scanf("%lf",&m);

        n1=csms(sms);

        n2=cm(m);

        n3=tc(n1,n2);


        printf("To teliko kostos pliromis einai : %lf \n",n3);
        printf("*********************************************\n");

}




int main()
{

    for(int i=1; i<=10; i++){
        printf("Arithmos pelati: : %d \n",i);
        menu();
        printf("*************************\n");
    }
    return 0;
}
