#include <stdio.h>
#include <stdlib.h>

int main()
{
        double v, mo;
        int sum;
        int maxi;
        int mini;

        double max=-99999;
        double min=99999;


        int i=1;

        while (i<=4)
            {

            printf("Foitiis: %d \n", i);
            printf("************************\n");


            sum=0;

        int j=1;

        while (j<=5)
        {

                printf("Mathima: %d \n", j);
                printf("Dose vathmo mathimatos \n");
                scanf("%lf" , &v);

                sum=sum+v;

                j++;

            }// while j

            mo=sum/5;
            printf("O mesos oros einai: %lf \n", mo);
            printf("*********************************\n");

            if ( max<=mo){  max=mo;
                            maxi=i;     }

            if ( min>=mo){  min=mo;
                            mini=i;     }

            i++;

        }// while i

            printf("*******************************************\n");
            printf("*******************************************\n");
            printf("O megistos mesos oros einai: %lf \n", max);
            printf("Einai o foititis: %d \n", maxi);
            printf("*******************************************\n");
            printf("*******************************************\n");
            printf("O elaxistos mesos oros einai: %lf \n", min);
            printf("Einai o foititis: %d \n", mini);
            printf("*******************************************\n");
            printf("*******************************************\n");




    return 0;
}
