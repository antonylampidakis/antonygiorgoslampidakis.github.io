#include <stdio.h>
#include <stdlib.h>



double FuncMath( double x ){


    double y;

    y= 3*(pow(x,2)) + sqrt( 3 - (pow(x,2)) );

    return y;

}

int main()
{
    double r;

    for ( double i=-10; i<=10; i=i+0.1 ){


        r=FuncMath(i);
        printf("To apotelesma einai : %lf\n",r);
        printf("*****************************\n");

    }



    return 0;
}
