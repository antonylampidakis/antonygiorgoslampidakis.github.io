#include <stdio.h>
#include <string.h>

struct Books {

   char  title[50];

   char  author[50];

   char  subject[100];

   int   book_id;

};


void printBook( struct Books book ) {

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}



int main(){

    struct Books Book1;

    strcpy( Book1.title, "Telecom Billing");
    strcpy( Book1.author, "Theodoros Alevizos");
    strcpy( Book1.subject, "Telecom Billing Tutorial");
    Book1.book_id = 6495700;

    printBook( Book1 );


}
