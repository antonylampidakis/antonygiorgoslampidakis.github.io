#include <stdio.h>
#include <stdlib.h>

struct stacknode{
    int data;
    struct stacknode *nextPtr;
};

typedef struct stacknode stacknode;
typedef stacknode *stacknodePtr;

void instraction(void){
    puts("Enter choice: \n"
         "1.to push a value\n"
         "2.to pop a value \n"
         "3.to end programm");

}

void push (stacknodePtr *topptr , int info ){

    stacknodePtr newptr= malloc(sizeof(stacknode));

    if (newptr != NULL){
        newptr->data=info;
        newptr->nextPtr = *topptr;
        *topptr=newptr;
    }
    else{
        printf("No memory avaliable \n");
    }

}

int pop (stacknodePtr *topptr){

    stacknodePtr tempptr = *topptr;
    int popvalue= (*topptr)->data;
    *topptr=(*topptr)->nextPtr;
    free(tempptr);
    return popvalue;

}

void printstack (stacknodePtr curentptr){

    if (curentptr==NULL){
        puts("stack is empty \n");
    }
    else{
        puts("The stack is : \n");

        while (curentptr !=NULL){
            printf("%d-->",&curentptr->data);
            curentptr= curentptr->nextPtr;
        }
        puts("null\n");
    }
}

int isEmpty(stacknodePtr topptr){
    return topptr==NULL;

}

int main(void){
    stacknodePtr stackptr =NULL;
    int value;

    instraction();
    printf("%s","?");
    unsigned int choice;
    scanf ("%u",&choice);

    while (choice!=3){

            switch(choice){

                case 1:
                    printf("dose arithmo : \n");
                    scanf("%d",&value);
                    push(&stackptr,value);
                    printstack(stackptr);
                    break;
                case 2:
                    if (!isEmpty(stackptr)){
                        printf("pop value is : %d\n",pop(&stackptr));
                    }
                    printstack(stackptr);
                    break;
                default :
                    puts("invalide choice \n");
                    instraction();
                    break;
            }
            printf("%s","?");
            scanf ("%u",&choice);
    }
    puts("end of programm");

}
