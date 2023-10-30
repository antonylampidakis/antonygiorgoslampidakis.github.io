#include <stdio.h>
#include <stdlib.h>

int kiv( int n)
{
    int k=n*n*n;

    return k;
}

void menu(){
    int x;
    int y;

    printf("Dose enan arithmo : \n");
    scanf("%d", &x);

    y=kiv(x);
    printf("To apotelsma einai : %d\n",y) ;



}

int main()
{

    menu();
    return 0;
}
