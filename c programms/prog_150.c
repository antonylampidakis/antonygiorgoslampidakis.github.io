#include <stdio.h>
#include <stdlib.h>


struct person {
    int id;
    char fname[20];
    char lname[20];
};

void writefile (){

    FILE* infile;
    infile = fopen("data.txt", "wb+");

    if (infile == NULL) {
        fprintf(stderr, "\nError opening file\n");
        exit(1);
    }


    struct person write_struct = { 1, "Antonio", "Damiano" };


    fwrite(&write_struct, sizeof(write_struct), 1,
           infile);


    fclose(infile);
}

void readfile (){

    FILE* infile;
    infile = fopen("data.txt", "r");

    if (infile == NULL) {
        fprintf(stderr, "\nError opening file\n");
        exit(1);
    }


    struct person read_struct;

    fread(&read_struct, sizeof(read_struct), 1, infile);


    printf("Name: %s %s \nID: %d", read_struct.fname,
           read_struct.lname, read_struct.id);


     fclose(infile);
}



int main()
{

    writefile ();
    readfile ();

    return 0;
}


