#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;
    double x;
    double result;
    double paronomastis;

    printf("Input value for d : ");
    scanf("%lf",&d);

    printf("******************************\n");

    printf("Input value for x : ");
    scanf("%lf",&x);

    paronomastis= sqrt(x+d)+sqrt(x);
    result= d/paronomastis;

    printf("******************************\n");

    printf("Result is : %lf\n",result);

    printf("******************************");

    return 0;
}
