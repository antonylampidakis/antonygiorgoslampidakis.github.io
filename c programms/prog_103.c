#include <stdio.h>
#include <stdlib.h>

struct stackNode {
    int data ;
    struct stackNode *nextptr;
};

typedef stackNode stackNode;
typedef stackNode *stackNodeptr;

void instraction (void){
    puts ("Enter choice:\n"
      "1 to push a value on the stack\n"
      "2 to pop a value off the stack\n"
      "3 to end program");
}

void push (stackNodeptr *topptr , int info){

    stackNodeptr newptr = malloc (sizeof(stackNode));   // dimioyrgia kai desmeysi mnimis

    if (newptr != NULL){
        newptr->data = info;
        newptr->nextptr= *topptr;
        *topptr=newptr;
    }

    else{
        printf("%d not inserted. No memory available.\n",info);
    }
}

int pop(stackNodeptr *topptr){
    stackNodeptr tempptr =*topptr;
    int popvalue = (*topptr)->data;
    *topptr=(*topptr)->nextptr;
    free(nextptr);
    return popvalue;
}

void printstack (stackNodeptr currentptr){
    if (currentptr == NULL){
        printf("The stack is empty.\n");
    }
    else {
        printf ("The stack is:");


        while (currentptr != NULL){
            printf("%d --> ", currentptr->data);
            currentptr=currentptr->nextptr;

        }
        printf("NULL\n");
    }
}

int isEmpty (stackNodeptr topptr){

return topptr == NULL;

}

int main()
{

    stackNodeptr stackptr = NULL;
    int value;

    instraction();
    printf("%s", "? ");
    unsigned int choice ;
    scanf("%u", &choice);

    while (choice !=3 ){

        switch (choice){

        case 1:
            printf("%s", "Enter an integer: ");
            scanf("%d",&value);
            push(&stackptr, value);
            printstack(stackptr);
            break;

        case 2:
            if (!isEmpty(stackptr)){
                printf("The popped value is %d.\n", pop(&stackPtr));
            }

            printstack(stackptr);
            break;
        default:
            puts("Invalid choice.\n");
            instraction();
            break;

        }
        printf("%s", "? ");
        scanf("%u", &choice);
    }


    puts("End of run.");
}
