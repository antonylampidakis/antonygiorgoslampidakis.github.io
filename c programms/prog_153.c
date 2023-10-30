#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

void write (){
    FILE *fwr;
    fwr=fopen("data.txt","w");

    if (fwr == NULL) {

      fprintf(stderr, "Error to open the file");
      exit (1);
   }

    struct Books b1={"biblio1","author1","subject1",1};
    struct Books b2={"biblio2","author2","subject2",2};

    fwrite (&b1, sizeof(struct Books), 1, fwr);
    fwrite (&b2, sizeof(struct Books), 1, fwr);

    if(fwrite != 0)
      printf("Contents to file written successfully !\n");
    else
      printf("Error writing file !");



    fclose(fwr);
}

void read (){
    FILE *fr;
    fr=fopen("data.txt","r");

    struct Books b1;
    struct Books b2;

    if (fr == NULL) {

      fprintf(stderr, "Error to open the file");
      exit (1);
   }


    while(fread(&b1, sizeof(struct Books), 1, fr))

      printf ("title = %s author = %s subject = %s  book_id = %d\n", b1.title, b1.author, b1.subject, b1.book_id);

    while(fread(&b2, sizeof(struct Books), 1, fr))

      printf ("title = %s author = %s subject = %s  book_id = %d\n", b2.title, b2.author, b2.subject, b2.book_id);


    fclose(fr);
}

void read2(){

    FILE *fr;
    char ch;
    fr=fopen("data.txt","r");

    if (fr == NULL) {

      fprintf(stderr, "Error to open the file");
      exit (1);
   }

    do {
        ch = fgetc(fr);
        printf("%c", ch);


    } while (ch != EOF);

    fclose(fr);
}





int main()
{
    //write ();
    printf("**************************************************************\n");
    //read ();
    printf("**************************************************************\n");
    read2();
    return 0;
}
