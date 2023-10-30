#include <stdio.h>
#include <stdlib.h>


double sum( double n1, double n2 ){

    double sm=n1+n2;
    return sm;


}

int main()
{
    double a,b,s;

    printf("Dose ton proto airthmo : \n");
    scanf("%lf",&a);

    printf("Dose ton deyetero arithmo : \n");
    scanf("%lf",&b);

    s=sum(a,b);

    printf("To apotelesma einai : %lf \n", s);

    return 0;
}
