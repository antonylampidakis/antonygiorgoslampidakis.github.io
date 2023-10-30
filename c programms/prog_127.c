#include <stdio.h>
#include <stdlib.h>

void area(){

    FILE *fptr2;
    int areas[5];
    int numbarray[5];

    for (int i=0; i<5; i++){

            areas[i]=numbarray[i] *3.14 *2;

    }

    for(int j=0; j<5; j++){
        printf("To embado einai : %d\n",&areas[j]);
    }




    fptr2=fopen("areas.txt","w");

    for(int j=0; j<5; j++){

        fwrite(areas,sizeof(areas),5,fptr2);

        //fprintf(fptr2,"%d\n",areas[j]);
    }



    fclose(fptr2);

}


int main()
{

    FILE *fptr;


    fptr=fopen("aktines.txt","r");

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

    area();


    fclose(fptr);

    return 0;
}
