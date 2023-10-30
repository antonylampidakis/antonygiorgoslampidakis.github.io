#include <stdio.h>
#include <stdlib.h>

int main()
{
     FILE* inp;
    inp = fopen("test.txt","r");
    char arr[100][50];
    int i = 0;

    while(1){
        char r = (char)fgetc(inp);
        int k = 0;
        while(r!=',' && !feof(inp)){
            arr[i][k++] = r;
            r = (char)fgetc(inp);
        }
        arr[i][k]=0;
        if(feof(inp)){
            break;
        }
        i++;
    }
    int j;
    for(j = 0;j<=i;j++){
        printf("%s\n",arr[j] );
    }
    return 0;
}
