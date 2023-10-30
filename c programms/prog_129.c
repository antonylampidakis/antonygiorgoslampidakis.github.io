#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert (){

    FILE  *fptr;
    fptr=fopen("file.txt","w");
    char charactres[11] ;

    if (fptr==NULL){
        printf("Error");
        exit(0);
    }

    for (int i=0; i<11 ; i++){
        printf("Dose 10 xaraktires :\n");
        scanf("%s", &charactres[i]);
        //fscanf(fptr,"%s",charactres[i]);
        fwrite(charactres,sizeof(charactres),11,fptr);

    }

    fclose(fptr);
}

void output (){
    FILE  *fptr;
    fptr=fopen("file.txt","r");
    char charactres ;

    if (fptr==NULL){
        printf("Error");
        exit(0);
    }


    //printf("%c", charactres);

    fclose(fptr);
}


int main()
{

    insert ();
    output ();

}
