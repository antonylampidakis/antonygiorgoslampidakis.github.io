#include <stdio.h>
#include <stdlib.h>

struct stackNode {
    int data;
    struct stackNode *nextPtr;

};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void instructions (void){
    puts("Enter your choice : \n"
         "1.dose stixio \n"        //"1 to push a value on the stack\n"
         "2.aferese stoixio \n"     //"2 to pop a value off the stack\n"
         "3.end of programm");//"3 to end program"
}

void push (StackNodePtr *topPtr , int info){

    StackNodePtr newptr = malloc(sizeof(StackNode));

    if (newptr != NULL ){
        newptr->data=info;
        newptr->nextPtr=*topPtr;
        *topPtr=newptr;
    }

    else {
        printf ("no memory \n"); //printf("%d not inserted. No memory available.\n", info);
    }

}

int pop (StackNodePtr *topPtr ){
    StackNodePtr tempptr=*topPtr;
    int popvalue =(*topPtr)->data;
    *topPtr=(*topPtr)->nextPtr;
    free(tempptr);
    return popvalue;
}

void printstack (StackNodePtr currentptr){
    if (currentptr == NULL){
        puts("Empty stack \n"); // puts("The stack is empty.\n");
    }
    else {
        puts ("i stack einai : \n "); //puts("The stack is:");

        while (currentptr != NULL){
            printf("%d -->", currentptr->data);
            currentptr = currentptr ->nextPtr;
        }
        //puts("NULL\n");
    }
}

int isEmpty (StackNodePtr topptr){
    return topptr == NULL;
}


int main() //int main(void)
{
    StackNodePtr stackptr = NULL;
    int value;

    instructions();
    printf("dose epilogi \n"); //printf("%s", "? ");
    unsigned int choice ;
    scanf("%u",&choice);

    while (choice !=3 ){

        switch(choice){

        case1:
            printf("Dose stixia : \n"); //printf("%s", "Enter an integer: ");
            scanf("%d",&value);

            push(&stackptr,value);
            printstack(stackptr);
            break;

        case2:

            if (!isempty(stackptr)){
                printf("pop value is : %d \n",pop(&stackptr)); //printf("The popped value is %d.\n", pop(&stackPtr));
            }
            printstack(stackptr);
            break;

        defult:
            puts("invalid choice\n");
            instructions();
            break;
        }
    printf("dose epilogi \n"); //printf("%s", "? ");
    scanf("%u",&choice);
    }

puts("End of run\n");
}
