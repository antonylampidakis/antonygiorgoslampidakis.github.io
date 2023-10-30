//#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return intArray[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}

void insert(int data) {

   if(!isFull()) {

      if(rear == MAX-1) {
         rear = -1;
      }

      intArray[++rear] = data;
      itemCount++;
   }
}

void Popitem (){
    int data;
    if (rear == MAX){

        intArray[--rear]=data;
        itemCount--;
    }

    return data;
}
/*
   int data;
   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Stack keni.\n");
   }
}
*/

int main()
{


   insert(30);
   insert(50);
   insert(90);
   insert(1000);
   insert(1200);
   insert(1800);

   for (int i=0; i<MAX; i++){
        printf("%d\n",intArray[i]);
   }

   printf("To proto stoixeio einai : %d\n",peek());

   if(isFull()) {
      printf("H Queue einai gemati ! ! ! \n");
   }

    Popitem(1200);

     for (int i=0; i<MAX; i++){
        printf("%d\n",intArray[i]);
   }

}
