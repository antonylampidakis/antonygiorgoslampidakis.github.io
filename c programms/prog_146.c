
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Course {
	char cname[30];
	char sdate[30];
};


int main()
{
	FILE* of;
	of = fopen("test.txt", "w");
	if (of == NULL) {
		fprintf(stderr,
				"\nError to open the file\n");
		exit(1);
	}

	struct Course inp1 = { "Thessaloniki",
						"Makedonia" };

	struct Course inp2 = { "Athina",
						"Attiki" };

	struct Course inp3 = { "Alexandroupoli",
						"Evros" };
	fwrite(&inp1, sizeof(struct Course),
		1, of);
	fwrite(&inp2, sizeof(struct Course),
		1, of);
	fwrite(&inp3, sizeof(struct Course),
		1, of);
	if (fwrite != 0)
		printf("Contents to file written successfully !\n");
	else
		printf("Error writing file !\n");
	fclose(of);


	FILE* inf;
	struct Course inp;
	inf = fopen("test.txt", "r");

	if (inf == NULL) {
		fprintf(stderr,
				"\nError to open the file\n");
		exit(1);
	}

	while (fread(&inp, sizeof(struct Course),
				1, inf))
		printf("Course Name = %s Started = %s\n",
			inp.cname, inp.sdate);
	fclose(inf);
}

