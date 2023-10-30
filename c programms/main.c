#include <stdio.h>
#include <stdlib.h>

void input (){

    int A[10];

    for (int i=0; i<10; i++){
        printf("Dose timi ston pinaka : \n");
        scanf("%d",&A[i]);
    }
}

void output (){

    int A[10];

    for (int i=0; i<10; i++){
        printf("Ta stoixia toy pinaka einai : %d\n",A[i]);
    }
}

void mo (){
    int A[10];
    int sum=0;
    double mo;

    for(int i=0; i<10; i++){
        sum=sum+A[i];
    }
    mo=sum/10;
    printf("O mesos oros ton stixion einai : %lf\n",mo);
}

int main()
{
    input();
    output();
    mo();
    return 0;
}
