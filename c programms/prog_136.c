#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("message.txt", "w");
    if(file == NULL)
    {
        printf("Failed to open file!\n");
        return 1;
    }

    char *message = "I am a programmer - software engineer \n";
    int i = 0;
    while(i < strlen(message))
    {
        fputc(message[i], file);
        i++;
    }
    fclose(file);
}
