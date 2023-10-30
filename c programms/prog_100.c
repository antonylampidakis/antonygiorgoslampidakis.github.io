#include <stdio.h>
#include <stdlib.h>


struct queueNode {
   char data;
   struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void instructions(void)
{
   printf ("Enter your choice:\n"
           "   1 to add an item to the queue\n"
           "   2 to remove an item from the queue\n"
           "   3 to end\n");
}


void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
   QueueNodePtr newPtr = malloc(sizeof(QueueNode));

   if (newPtr != NULL) {
      newPtr->data = value;
      newPtr->nextPtr = NULL;


      if (isEmpty(*headPtr)) {
         *headPtr = newPtr;
      }
      else {
         (*tailPtr)->nextPtr = newPtr;
      }

      *tailPtr = newPtr;
   }
   else {
      printf("%c not inserted. No memory available.\n", value);
   }
}



char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
   char value = (*headPtr)->data;
   QueueNodePtr tempPtr = *headPtr;
   *headPtr = (*headPtr)->nextPtr;

   // if queue is empty
   if (*headPtr == NULL) {
      *tailPtr = NULL;
   }

   free(tempPtr);
   return value;
}


int isEmpty(QueueNodePtr headPtr)
{
   return headPtr == NULL;
}


void printQueue(QueueNodePtr currentPtr)
{

   if (currentPtr == NULL) {
      puts("Queue is empty.\n");
   }
   else {
      puts("The queue is:");


      while (currentPtr != NULL) {
         printf("%c --> ", currentPtr->data);
         currentPtr = currentPtr->nextPtr;
      }

      puts("NULL\n");
   }
}





int main(void)
{
    char item;
   QueueNodePtr headPtr = NULL;
   QueueNodePtr tailPtr = NULL;

   instructions();
   printf("%s", "? ");
   unsigned int choice;
   scanf("%u", &choice);


   while (choice != 3) {

      switch(choice) {

         case 1:
            printf("%s", "Enter a character: ");
            scanf("\n%c", &item);
            enqueue(&headPtr, &tailPtr, item);
            printQueue(headPtr);
            break;

         case 2:

            if (!isEmpty(headPtr)) {
               item = dequeue(&headPtr, &tailPtr);
               printf("%c has been dequeued.\n", item);
            }

            printQueue(headPtr);
            break;
         default:
            puts("Invalid choice.\n");
            instructions();
            break;
      }

      printf("%s", "? ");
      scanf("%u", &choice);
   }

   puts("End of run.");
}


