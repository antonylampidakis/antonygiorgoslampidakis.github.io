#include <stdio.h>



double prosthesi (double n1, double n2){

    return ( n1+n2);
}

double aferesi (double n1, double n2){

    return (n1-n2);
}

double ginomeno(double n1, double n2){

    return (n1*n2);
}

double dieresi (double n1, double n2){

    return (n1/n2);
}


void menu(){

    double a, b, res;
    char x;

    printf("Arithmomixani \n");
    printf("Dose ton proto arithmo : \n");
    scanf("%lf",&a);

    printf("Dose ton deytero arithmo : \n");
    scanf("%lf",&b);

    printf("Dose epilogi praxis : ( +  -  *  / ) :\n ");
    scanf(" %c",&x);

        if( x=='+') {
                res=prosthesi(a,b);
                printf ("To apotelsesma einai :%lf\n",res);
        }

        else if ( x=='-') {
                res=aferesi(a,b);
                printf ("To apotelsesma einai :%lf\n",res);
        }

        else if ( x=='*'){
                res=ginomeno(a,b);
                printf ("To apotelsesma einai :%lf\n",res);
        }

        else if ( x=='/'){
                if( b!=0) {
                    res=dieresi(a,b);
                    printf ("To apotelsesma einai :%lf\n",res);
                }
                else {
                    printf("Den mporei na gini i dieresi !\n");
                }
        }

        else {
                printf ("Dosate lathos epilogi\n");
        }
}


int main()
{
    menu();
    return 0;
}
