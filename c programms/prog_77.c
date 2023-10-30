#include <stdio.h>
#include <stdlib.h>

struct Circle {
    double r;

    struct Point {
        double x,y;

    } p1;

} c1={3.2, 2.2 , 2.5 };


int main()
{
    printf("H aktina toy kikloy einai : %lf \n",c1.r);
    printf("To x einai : %lf\n",c1.p1.x);
    printf("To y einai : %lf\n",c1.p1.y);


    return 0;
}
