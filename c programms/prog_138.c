
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("message.txt", "r");
    if(file == NULL)
    {
        printf("Failed to open file!\n");
        return 1;
    }

    char message[100];
    int c = 0;
    int i = 0;
    while((c = fgetc(file)) != EOF)
    {
        message[i] = c;
        i++;
    }

    printf("%s", message);
}
