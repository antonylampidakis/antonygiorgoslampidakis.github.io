#include <stdio.h>
#include <math.h>

int largest(int ar[],int size)
{

    int largest=ar[0];

    for(int i=1;i<size;i++)
    {

        if(ar[i] > largest)
        largest=ar[i];
    }
    return largest;
}

int main()
{
    int size;

    printf("Dose to megethos tou pinaka: ");
    scanf("%d",&size);


    int ar[size];


    printf("Dose times: \n");

    for(int i=0;i<size;i++)
    scanf("%d",&ar[i]);

    printf("******************************\n");
    printf("To megisto stoixeio einai: %d\n",largest(ar,size));
    printf("******************************\n");

    return 0;
}
