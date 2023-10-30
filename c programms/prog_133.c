#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer {
   char  fname[20],lname[20];
   int   acct_num;
   float acct_balance;
};


void main ()
{
   FILE *outfile;
   struct customer input;


   outfile = fopen ("accounts.txt","w");
   if (outfile == NULL)
     {
      fprintf(stderr, "\nError opening accounts txt\n\n");
      exit (1);
     }


   printf("Enter \"stop\" for First Name to end program.");


   while(1)
     {

      printf("\nFirst Name: ");
      scanf ("%s", input.fname);

      if (strcmp(input.fname, "stop") == 0)
         exit(1);

      printf("Last Name : ");
      scanf ("%s", input.lname);
      printf("Acct Num  : ");
      scanf ("%d", &input.acct_num);
      printf("Balance   : ");
      scanf ("%f", &input.acct_balance);


      fwrite (&input, sizeof(struct customer), 1, outfile);
     }

}
