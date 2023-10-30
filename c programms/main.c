#include <stdio.h>
#include <stdlib.h>

void sum (){

    double a,b,s;

    printf("Dose proto arithmo : \n");
    scanf("%lf",&a);

    printf("Dose deyetro arithmo : \n");
    scanf("%lf",&b);

    s=a+b;
    printf("To athrisma ton dio arithmon einai : %lf\n",s);


}

int main()
{
    sum();
    return 0;
}
