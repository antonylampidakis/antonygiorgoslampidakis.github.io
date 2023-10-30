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

    char *message = "I am aprogrammer - software en gineer  \n";
    int i = 0;
    while(i < strlen(message))
    {
        int result = fputc(message[i], file);
        if(result == EOF)
        {
            printf("Failed to write a character!\n");
            return 1;
        }
        i++;
    }
    fclose(file);
}
