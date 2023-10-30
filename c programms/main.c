#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sms[10];
    int m[10];
    int csms[10];
    int cm[10];
    int tc[10];
    int c[10];

    for (int i=0; i<=10; i++)
    {
        printf("Dose stoixia gia ton pelati: %d \n ", i+1);
        printf("Dose ta sms toy pelati  : \n");
        scanf("%d",&sms[i]);

        printf("Dose ta lepta toy pelati : \n");
        scanf("%d",&m[i]);

        printf("****************************\n");
    }


    for (int i=0; i<=10; i++)
    {
        if (sms[i]>=1 && sms[i]<=100 ){ csms[i]=sms[i]*0.5;   }

        else if (sms[i]>101 && sms[i]<=200){ csms[i]=sms[i]*0.16;   }

        else { csms[i]=sms[i]*0.26; }


    }

    for (int i=0; i<=10; i++){

        if (m[i]>=1 && m[i]<=100){ cm[i]=m[i]*0.08;}

        else if (m[i]>101 && m[i]<=200){ cm[i]=m[i]*0.18;}

        else {cm[i]=m[i]*0.30;}

    }

    for (int i=0; i<=10; i++)
    {
        c[i]=cm[i]+csms[i];
    }

    for (int i=0; i<=10; i++)
    {
        tc[i]=c[i]+(c[i]*0.24);
    }

    for (int i=0; i<=10; i++)
    {
        printf("Gia ton pelati: %d\n",i+1);
        printf("Gia lepta omilias: %d\n", m[i]);
        printf("Gia sms : %d\n",sms[i]);
        printf("To poso logarismoy einai : %d\n",tc[i]);

        printf("**************************************\n");
        printf("**************************************\n");
    }

    return 0;
}
