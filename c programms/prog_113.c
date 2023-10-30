#include <stdio.h>
#include <stdlib.h>

struct pc{

    char pcname [50];
    int id;

};




int main()
{
    struct pc pithagoras[5];
    FILE *fptr;
    int i;

    fptr=fopen("file.txt","wb");
    for (i=0; i<5; i++){

        fflush(stdin);
        printf("Enter name of pc : ");
        gets(pithagoras[i].pcname);

        printf("Enter id: ");
        scanf("%d", &pithagoras[i].id);

        printf("*************************************\n");

        fwrite(pithagoras, sizeof(pithagoras), 1, fptr);
        fclose(fptr);

        fptr = fopen("file.txt", "rb");

        fread(pithagoras, sizeof(pithagoras), 1, fptr);

    for(i = 0; i < 5; ++i)
    {
        printf("pc name: %sn\id: %d", pithagoras[i].pcname, pithagoras[i].id);
    }
    fclose(fptr);
    }

    return 0;
}
