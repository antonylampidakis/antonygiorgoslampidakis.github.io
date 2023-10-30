#include <stdio.h>
int main(void)
{
    char fever, cough; /*Sets the chars.*/

    printf("Are you running a fever? (y/n)\n"); /*Asks if they have a fever and saves their input.*/
    scanf("%c",&fever);

    printf("Do you have a runny nose/cough? (y/n)\n"); /*Asks if they have a cough and saves their input.*/
    scanf(" %c",&cough);

    printf("Please verify the folling information.\nFever: %c \nRunny nose/cough: %c \n",fever,cough); /*Asks if the following info is correct.*/


    if ((fever=='y') && (cough=='y')){
        printf("Your recommendation is to see a doctor.");
    }

    else if ((fever=='n') && (cough=='y')){
        printf("Your recommendation is to get some rest.");
    }

    else if ((fever=='y') && (cough=='n') ){
        printf("Your recommendation is to see a doctor.");
    }

    else {
        printf("Your are healthy.");
    }

    return 0;
}
