
#include <stdio.h>
//#include <math.h>

void largest_elem(int ar[],int size,int *largest)
{

    *largest=ar[0];
    for(int i=1;i<size;i++)
    {

        if(ar[i] > *largest)
        *largest=ar[i];
    }
}


int main()
{
    int size;

    printf("Dose to megethos toy pinaka: ");
    scanf("%d",&size);


    int ar[size],largest;


    printf("Dose times ston pinaka: \n");

    for(int i=0;i<size;i++)
    scanf("%d",&ar[i]);

    largest_elem(ar,size,&largest);

    printf("******************************\n");
    printf("To megisto einai: %d\n",largest);
    printf("******************************\n");

    return 0;
}
