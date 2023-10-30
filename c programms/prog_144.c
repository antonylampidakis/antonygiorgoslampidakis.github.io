#include <stdio.h>
#include <stdlib.h>


void writefile  (){



	FILE* filePointer;


	char dataToBeWritten[50] = "aaaaaaaaaaaaaaaaaaaaaaaaa"
							"ffffffffffffffffffffffffffff";


	filePointer = fopen("file.txt", "w");


	if (filePointer == NULL) {
		printf("file.txt file failed to open.");
	}
	else {

		printf("The file is now opened.\n");

		if (strlen(dataToBeWritten) > 0) {


			fputs(dataToBeWritten, filePointer);
			fputs("\n", filePointer);
		}


		fclose(filePointer);

        printf("Data successfully written in file ! ! ! "
			"file.txt\n");
		printf("The file is now closed.\n");

        printf("*****************************************************\n");
    }

}

void readfile(){

    FILE* filePointer;

	char dataToBeRead[50];


	filePointer = fopen("file.txt", "r");


	if (filePointer == NULL) {
		printf("file.txt file failed to open.");
	}
	else {

		printf("The file is now opened.\n");


		while (fgets(dataToBeRead, 50, filePointer)
			!= NULL) {


			printf("%s", dataToBeRead);
		}


		fclose(filePointer);

		printf(
			"Data successfully read from file file.txt\n");
		printf("The file is now closed.");
	}

}



void main()
{
    writefile();
    readfile();
    return 0;

}
