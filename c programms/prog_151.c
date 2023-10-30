#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
   int roll_no;
   char name[20];
};


int main () {
   FILE *of;
   of= fopen ("file.txt", "w");

   if (of == NULL) {      fprintf(stderr, "Error to open the file");
      exit (1);
   }
   struct Student inp1 = {1, "Antonio"};
   struct Student inp2 = {2, "Damiano"};


   fwrite (&inp1, sizeof(struct Student), 1, of);
   fwrite (&inp2, sizeof(struct Student), 1, of);


   if(fwrite != 0)
      printf("Contents to file written successfully !");
   else
      printf("Error writing file !");
   fclose (of);


   FILE *inf;
   struct Student inp;

   inf = fopen ("file.txt", "r");

   if (inf == NULL) {

      fprintf(stderr, "Error to open the file");
      exit (1);
   }

   while(fread(&inp, sizeof(struct Student), 1, inf))

      printf ("roll_no = %d name = %s", inp.roll_no, inp.name);

   fclose (inf);
}
