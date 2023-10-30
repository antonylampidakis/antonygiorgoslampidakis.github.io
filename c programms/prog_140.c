#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;

   fp = fopen("file.txt","w+");
   fputs("This is example", fp);

   fseek( fp, 7, SEEK_SET );
   fputs("C C++ and JAVA", fp);
   fclose(fp);
}
