#include <stdio.h>
#include <stdlib.h>


int main()
{
    int D[29];



    for (int j=0; j<29; j++){
        printf("Dose timi gia ton pinaka : \n");
        scanf("%d",&D[j]);
    }
    printf("******************************************************************\n");

    for(int j=0; j<=29; j++){
        printf("o pinaka einai : %d\n",D[j]);
    }

    printf("******************************************************************\n");



// antimetatheseis
    int temp;

    int N=29;

    for ( int i=0; i<=14; i++){

        N--;

        temp=D[i];
        D[i]=D[N];
        D[N]=temp;

    }


     printf("***************************************************************\n");

    for(int i=0; i<29; i++){
        printf("o pinakas meta tis antimetatheseis einai : %d\n",D[i]);
    }

       FILE *fp;
        fp=fopen("file.txt","w");

    for(int i=0;i<29;i++)
    {
    fprintf(fp,"%d\n",D[i]);
    }
    fclose(fp);

    return 0;
}
