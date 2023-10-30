#include <stdio.h>
#include <stdlib.h>

int  area(int numbarray[],int g ){


    int area;

    area=numbarray[g] *3.14 *2;

        return area;

}


int main()
{

    FILE *fptr;
    FILE *fptr2;

    fptr=fopen("aktines.txt","r");
    fptr2=fopen("areas.txt","w");

    int numbarray[5];
    int areas[5];

    if (fptr == NULL){
        printf("Error Reading File\n");
        exit (0);
    }

    for (int i=0; i<=5; i++){
        fscanf(fptr,"%d\n", &numbarray[i]);


    }
    for (int i=0; i<5; i++){
        printf("I aktina einai : %d\n",numbarray[i]);
    }

    printf("***************************************************\n");
    printf("****************************************************\n");



    for (int i=0; i<=5; i++){

        int res=area(numbarray,5);

        fprintf(fptr2,"%d\n",&res);

    }


    //for(int j=0; j<5; j++){

        //fwrite(areas,sizeof(areas),5,fptr2);

        //fprintf(fptr2,"%d\n",areas[j]);
    //}




    fclose(fptr);
    fclose(fptr2);
    return 0;
}

