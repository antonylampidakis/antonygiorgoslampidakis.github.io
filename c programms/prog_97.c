#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;


int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}


int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}


int peek(){
   return stack[top];
}


int pop(){
   int data;
   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Stack keni.\n");
   }
}


int push(int data){
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Stack gemati.\n");
   }
}


int main(){
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);
   printf("To stoixeio tis korifis: %d\n" ,peek());
   printf("Stoixeia: \n");

   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }
   printf("Stack gemati: %s\n" , isfull()?"true":"false");
   printf("Stack keni: %s\n" , isempty()?"true":"false");


   return 0;
}
